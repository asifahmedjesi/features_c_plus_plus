#include <bits/stdc++.h>
using namespace std;

void referenceDeclarationInitialization();
void referenceForLValueAndRValueObjects();

int main() {

    referenceDeclarationInitialization();
    referenceForLValueAndRValueObjects();

    return 0;
}
void referenceDeclarationInitialization() {
    cout << "Reference declaration and Initialization: " << endl;

    /* lvalue reference */
    int x = 5;
    int& r = x;     // r is an alias to x (this is lvalue reference)
    cout << "x: " << x << endl;
    r = 10;         // assigns value to r/x
    cout << "x: " << x << endl;
    cout << "r: " << r << endl;

    cout << endl;

    int a = 500;
    cout << "a: " << a << endl;
    cout << "x: " << x << endl;
    cout << "r: " << r << endl << endl;
    r = a;
    cout << "r = a" << endl;
    cout << "a: " << a << endl;
    cout << "x: " << x << endl;
    cout << "r: " << r << endl << endl;
    r = 600;
    cout << "r = 600" << endl;
    cout << "a: " << a << endl;
    cout << "x: " << x << endl;
    cout << "r: " << r << endl;

    cout << endl;

    int* ptr = &x;  // ptr assigned address to x
    int& s = *ptr;
    s = 20;
    cout << "x: " << x << endl;
    cout << "s: " << s << endl;

    cout << endl;

    /*
     * Reference and Pointer Guideline:
     *
     * Generally, whenever a pointer does not need to be reassigned, a reference should be used instead, because a reference
     * is safer than a pointer since it must always refer to something.
     *
     * This means that there is no need to check if a reference refers to null, as should be done with pointers.
     *
     * It is possible for a reference to be invalid—for example, when a reference refers to a null pointer—but it is much
     * easier to avoid this kind of mistake with references than it is with pointers.
     */

    ptr = nullptr;
    /*
     * int& ref = *ptr;
     * ref = 100;   // error: invalid memory access
     * cout << "ref: " << ref << endl;
     */


    /*
     * rvalue reference:
     *
     * With C++11 came a new kind of reference called an rvalue reference.
     * This reference can bind and modify temporary objects (rvalues), such as literal values and function return values.
     * An rvalue reference is formed by placing two ampersands after the type.
     * */

    int&& ref = 1 + 2;                  // rvalue reference
    cout << "ref: " << ref << endl;
    ref += 3;
    cout << "ref: " << ref << endl;     // "6"

    cout << endl;
}
void referenceForLValueAndRValueObjects() {
    cout << "Reference for lvalue and rvalue objects: " << endl;

    int i = 10;
    int& lvalueref = i;         // Ok, lvalues (variables) can be saved in lvalue references
    int&& rvalueref = 1 + 2;    // Ok, temporary objects (rvalues) such as literals or function return values can be saved in rvalue references

    //int& m = 1;               // Not allowed, Non-const lvalue reference to type 'int' cannot bind to a temporary of type 'int'
    const int& m = 1;           // Ok, temporary object (rvalue) such as literal can be saved in const lvalue reference
    int&& n = 1;                // Ok, temporary object (rvalue) such as literal can be saved in rvalue reference

    cout << "lvalueref: " << lvalueref << endl;
    cout << "rvalueref: " << rvalueref << endl;
}