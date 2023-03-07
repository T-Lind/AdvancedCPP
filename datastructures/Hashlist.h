#include <cstdio>
#include <functional>
#include <string>
#include <vector>

using namespace std;

template <typename T>
class Hashlist {
public:
    Hashlist(int length);
    Hashlist(int length, bool useDefault);
    Hashlist(int length, function<int(const T&)> hashFunc);
    Hashlist(int length, function<int(const T&)> hashFunc, bool useDefault);
    void add(T item);
    string toString();
    ~Hashlist();
    int size();
private:
    function<int(const T&)> hashFunc;
    int length;
    vector<T>* array;

    void fillNull(T* input);
};

template<typename T>
Hashlist<T>::Hashlist(int length) {
    this(length, [] (T input) -> int { return (int) input; });
}

template<typename T>
Hashlist<T>::Hashlist(int length, function<int(const T &)> hashFunc) {
    this->length = length;
    this->hashFunc = hashFunc;
    array = new vector<T>[length];
//    fillNull(array);
}

template<typename T>
Hashlist<T>::Hashlist(int length, bool useDefault) {
    this(length, [] (T input) -> int { return (int) input; }, useDefault);
}

template<typename T>
Hashlist<T>::Hashlist(int length, function<int(const T &)> hashFunc, bool useDefault) {
    this->length = length;
    this->hashFunc = hashFunc;
    array = new T[length];
//    if(useDefault)
//        fillNull(array);
}


template<typename T>
Hashlist<T>::~Hashlist() {
    delete array;
}

template<typename T>
void Hashlist<T>::add(T item) {
    auto code = hashFunc(item);
    array[code].push_back(item);
}

template<typename T>
string Hashlist<T>::toString() {
    string retStr = "[";
    for(int i=0;i<length;i++){
        retStr += "[";
        for (int j = 0; j < array[i].size(); j++)
            retStr += to_string(array[i][j])+", ";
        if(array[i].size() > 0)
            retStr+="\b\b";
        retStr+="], ";
    }
    return retStr+"\b\b] ";
}

template<typename T>
int Hashlist<T>::size() {
    return length;
}

template<typename T>
void Hashlist<T>::fillNull(T *input) {
    for(int i=0;i<length;i++){
        input[i] = vector<T>();
    }
}