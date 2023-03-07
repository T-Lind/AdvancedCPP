#include <cstdio>
#include <functional>
#include <string>
typedef std::string string;

template <typename T>
class Hashmap {
public:
    Hashmap(int length);
    Hashmap(int length, bool useDefault);
    Hashmap(int length, std::function<int(const T&)> function);
    Hashmap(int length, std::function<int(const T&)> function, bool useDefault);
    void add(T item);
    string toString();
    ~Hashmap();
    int size();
private:
    std::function<int(const T&)> function;
    int length;
    T* array;

    void fillNull(T* input);
};

template<typename T>
Hashmap<T>::Hashmap(int length) {
    this(length, [] (T input) -> int { return (int) input; });
}

template<typename T>
Hashmap<T>::Hashmap(int length, std::function<int(const T &)> function) {
    this->length = length;
    this->function = function;
    array = new T[length];
    fillNull(array);
}

template<typename T>
Hashmap<T>::Hashmap(int length, bool useDefault) {
    this(length, [] (T input) -> int { return (int) input; }, useDefault);
}

template<typename T>
Hashmap<T>::Hashmap(int length, std::function<int(const T &)> function, bool useDefault) {
    this->length = length;
    this->function = function;
    array = new T[length];
    if(useDefault)
        fillNull(array);
}


template<typename T>
Hashmap<T>::~Hashmap() {
    delete array;
}

template<typename T>
void Hashmap<T>::add(T item) {
    auto code = function(item);
    array[code] = item;
}

template<typename T>
string Hashmap<T>::toString() {
    string retStr = "[";
    for(int i=0;i<length;i++){
        retStr += to_string(array[i])+", ";
    }
    return retStr+"\b\b] ";
}

template<typename T>
int Hashmap<T>::size() {
    return length;
}

template<typename T>
void Hashmap<T>::fillNull(T *input) {
    for(int i=0;i<length;i++){
        input[i] = T();
    }
}