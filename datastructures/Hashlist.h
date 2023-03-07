#include <cstdio>
#include <functional>
#include <string>
#include <vector>
#include <typeinfo>
#include <sstream>
using namespace std;

template<typename T>
class Hashlist {
public:
    Hashlist(int length);

    Hashlist(int length, function<int(const T &)> hashFunc);


    void add(T item);

    string toString();

    ~Hashlist();

    int size();

private:
    function<int(const T &)> hashFunc;
    int length;
    vector<T> *array;
};

template<typename T>
Hashlist<T>::Hashlist(int length) {
    this(length, [](T input) -> int { return (int) input; });
}

template<typename T>
Hashlist<T>::Hashlist(int length, function<int(const T &)> hashFunc) {
    this->length = length;
    this->hashFunc = hashFunc;
    array = new vector<T>[length];
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
    for (int i = 0; i < length; i++) {
        retStr += "[";
        for (int j = 0; j < array[i].size(); j++) {
            auto item = array[i][j];
            stringstream ss;
            string str;
            ss << item;
            ss >> str;
            retStr += str + ", ";
        }
        if (array[i].size() > 0) // Remove extra comma and space
            retStr += "\b\b";
        retStr += "], ";
    }
    return retStr + "\b\b] ";
}

template<typename T>
int Hashlist<T>::size() {
    return length;
}
