#include <bits/stdc++.h>
using namespace std;

void useFunctionTemplate();

int main() {

    useFunctionTemplate();

    return 0;
}

void swap1(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}


template<class T>
void swap2(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}


template<typename T>
void swap3(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}


template<typename T, typename U>
void swap(T& a, U& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}


template<typename T>
class MyBox
{
public:
    T a, b;
    void swap();
};
template<typename T>
void MyBox<T>::swap()
{
    T tmp = a;
    a = b;
    b = tmp;
}


template<typename T, int N>
class MyBoxWithArray
{
public:
    T store[N];
};


template<typename T = int, int N = 5>
class MyBoxWithDefault
{
public:
    T store[N];
    T a, b;
    void swap();
};
template<typename T, int N>
void MyBoxWithDefault<T, N>::swap()
{
    T tmp = a;
    a = b;
    b = tmp;
}

void useFunctionTemplate() {
    int a = 1, b = 2;
    swap<int>(a, b);    // calls int version of swap

    bool c = true, d = false;
    swap<bool>(c, d);   // calls bool version of swap

    int e = 1, f = 2;
    swap(e, f);         // calls int version of swap

    int g = 1;
    long h = 2;
    swap<int, long>(g, h);

    MyBox<int> box1;
    MyBoxWithArray<int, 5> box2;
    MyBoxWithDefault<> box3;
}