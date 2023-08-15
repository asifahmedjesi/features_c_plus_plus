#include <bits/stdc++.h>
using namespace std;

void pointerToAVariable();
void pointerToAPointer();
void pointerDynamicAllocation();

int main() {

    pointerToAVariable();
    pointerToAPointer();
    pointerDynamicAllocation();

    return 0;
}
void pointerToAVariable() {
    cout << "Pointing to a Variable: " << endl;

    int i = 10;
    int* p = &i;

    cout << "Address of i (&i): \t"     << &i << endl;
    cout << "Address of i (p): \t"      << p << endl;
    cout << "Address of p (&p): \t"     << &p << endl;

    cout << "Value of i (i): \t"        << i << endl;
    cout << "Value of i (*p): \t"       << *p << endl;

    int* p2 = p; // copy of p (copies address stored in p)

    cout << endl;
}
void pointerToAPointer() {
    cout << "Pointing to a Pointer: " << endl;

    int i = 10;
    int* p = &i;
    int** r = &p;

    cout << "Address of i (&i): \t"     << &i << endl;
    cout << "Address of i (p): \t"      << p << endl;
    cout << "Address of i (*r): \t"     << *r << endl;
    cout << "Address of p (&p): \t"     << &p << endl;
    cout << "Address of p (r): \t"      << r << endl;
    cout << "Address of r (&r): \t"     << &r << endl;

    cout << "Value of i (i): \t"        << i << endl;
    cout << "Value of i (*p): \t"       << *p << endl;
    cout << "Value of i (**r): \t"      << **r << endl;

    cout << endl;
}
void pointerDynamicAllocation() {

    /*
     * int i = nullptr;         // error
     */
    int* p = nullptr;           // ok
    bool b = (bool) nullptr;    // false
    nullptr_t mynull = nullptr; // ok


    int* d = new int;   // dynamic allocation
    delete d;           // release allocated memory


    int* m = new int;   // allocate memory for object
    delete m;           // deallocate memory
    /*
     * *m = 5;          // error: write access violation
     */


    int* n = new int;
    delete n;
    n = nullptr;    // mark as null pointer
    delete n;       // safe

    if (n != nullptr) { *n = 5; }   // check for valid pointer
    if (n) { *n = 5; }              // alternative
}