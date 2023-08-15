#include <bits/stdc++.h>
using namespace std;

int main() {



    return 0;
}
void staticCast() {
    char c = 10;        // 1 byte
    int* p = (int*)&c;  // 4 bytes
    *p = 5;                             // runtime error: stack corruption
    //int* q = static_cast<int*>(&c);   // compile-time error
}
void reinterpretCast() {
    char c = 10;        // 1 byte
    int* r = reinterpret_cast<int*>(&c); // forced conversion
}
void constCast() {
    const int myConst = 5;
    int* nonConst = const_cast<int*>(&myConst); // removes const
    *nonConst = 10; // potential runtime error
}

class MyBase { public: virtual void test() {} };
class MyChild : public MyBase {};

void dynamicCast() {

    MyChild *child = new MyChild();

    MyBase *base = dynamic_cast<MyBase*>(child);                // ok, upcast
    MyChild *anotherChild = dynamic_cast<MyChild*>(base);       // ok, downcast

    MyBase *base2 = new MyBase();
    MyChild *child2 = dynamic_cast<MyChild*>(base2);
    // It will fail if the MyBase object contains a MyBase instance and
    // It will succeed if it contains a MyChild instance.
    if (child2 == nullptr) cout << "Null pointer returned";

    // Preferable
    MyBase *b = static_cast<MyBase*>(child);    // ok
    MyChild *c = dynamic_cast<MyChild*>(base);  // Succeeds for a MyChild object
}