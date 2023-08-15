#include <bits/stdc++.h>
using namespace std;

struct Foo
{
    int val = 0;
    Foo() { cout << "1" << " "; }
    ~Foo() { cout << "3" << " "; }
};

void functionUniquePointer();
void sharedPointer();
void weakSharedPointer();

int main() {

    functionUniquePointer();
    cout << endl << endl;
    sharedPointer();
    cout << endl << endl;
    weakSharedPointer();

    return 0;
}
void functionUniquePointer() {
    cout << "Unique Pointer: " << endl;

    // As of C++14, use of the new keyword is discouraged in most circumstances.
    //std::unique_ptr<Foo> p(new Foo());   // "1"   // discouraged
    std::unique_ptr<Foo> p = std::make_unique<Foo>();
    p->val = 2;
    cout << p->val << " ";  // "2"

    //std::unique_ptr<Foo> u1(new Foo());   // discouraged
    std::unique_ptr<Foo> u1 = std::make_unique<Foo>();
    //std::unique_ptr<Foo> u2 = u1;              // compile-time error
    std::unique_ptr<Foo> u3 = std::move(u1);     // transfers ownership
}
void sharedPointer() {
    cout << "Shared Pointer: " << endl;

    // As of C++14, use of the new keyword is discouraged in most circumstances.
    //shared_ptr<Foo> s1(new Foo());    // discouraged
    std::shared_ptr<Foo> s1 = std::make_shared<Foo>();
    std::shared_ptr<Foo> s2 = s1; // extends ownership
    s1 = nullptr; // reset pointer
    s2 = nullptr; // reset last pointer and delete memory
}
void observe(std::weak_ptr<int> weak)
{
    std::shared_ptr<int> s = weak.lock();
    if (s) {
        cout << "Pointer is " << *s << endl;
    }
    else {
        cout << "Pointer has expired" << endl;
    }
}
void weakSharedPointer() {
    cout << "Weak Shared Pointer: " << endl;

    std::shared_ptr<int> s = std::make_shared<int>(5);
    std::weak_ptr<int> w = s;   // copy pointer without ownership
    observe(w);                 // "Pointer is 5"
    s = nullptr;                // delete managed object
    observe(w);                 // "Pointer has expired"
}
