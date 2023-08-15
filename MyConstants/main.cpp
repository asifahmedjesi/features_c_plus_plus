#include <bits/stdc++.h>
using namespace std;

class MyClass
{
public:
    int x = 0;
    int i;
    const int c;
    const int d = 10;
    static int si;
    const static double csd;
    const static int csi = 5;

    MyClass() : c(5), i(5) { }

    void setX(int a) { x = a; }
    int getX() const { return x; }          // constant method
    const int& getXX() const { return x; }  // constant method with return type as constant
};
int MyClass::si = 1.23;
const double MyClass::csd = 1.23;


class Circle
{
public:
    int r;
    constexpr Circle(int x) : r(x) {}
};


void constantVariables();
void constantPointers();
void constantReferences();

int main() {

    constantVariables();
    constantPointers();
    constantReferences();

    return 0;
}
void constantVariables() {
    cout << "Constant Variables" << endl;

    const int var1 = 5;
    int const var2 = 10;    // alternative order
    //var1 = 50;            // Error: can not change the value of var1
}
void constantPointers() {
    cout << "Constant Pointers" << endl;
    cout << "\tpointer constant" << endl;
    cout << "\tpointee constant" << endl;
    cout << "\tpointer & pointee constant" << endl;

    int a = 20;

    /* pointer constant */
    int myPointee = 10;
    int* const p = &myPointee;  // pointer constant
    //p = &a;                   // Error: can not change the address
    *p = 20;                    // can change the value of myPointee

    /* pointee constant */
    int myPointee2 = 50;
    const int* q = &myPointee2; // pointee constant
    //*q = 100;                 // Error: can not change the value of myPointee2
    myPointee2 = 100;           // can change the value of myPointee2
    q = &a;                     // can change the address
    //*q = 50;                  // Error: can not change the value of a

    int myPointee3 = 100;
    const int* const r = &myPointee3;   // pointer & pointee constant
    //*r = 200;                         // Error: can not change the value of myPointee3
    //r = &a;                           // Error: can not change the address

    const int x = 50;
    //int* y = &x;  // Error
}
void constantReferences() {
    cout << "Constant References" << endl;
    cout << "\treferee constant" << endl;

    /* referee constant */
    int a = 100;
    const int& y = a;   // referee constant
    //y = 200;          // Error: can not change the value of a
}
void constantObjects() {
    cout << "Constant Objects" << endl;

    const MyClass a, b;
    //a = b;    // error: object is const
    //a.x = 10; // error: object field is const
}
void constantMethods() {
    cout << "Constant Methods" << endl;

    const MyClass a;
    //a.setX(2);    // error: cannot call non-const method
    a.getX();       // Ok. As method is declared constant.
}
void constantReturnTypeAndParameters() {
    cout << "Constant Return Type And Parameters" << endl;

}
void constantFields() {
    cout << "Constant Fields" << endl;

}
constexpr int getDefaultSize(int multiplier)
{
    return 3 * multiplier;
}
void constantExpressions() {
    cout << "Constant Expressions" << endl;

    /*
     * Unlike const variables, which may be assigned at runtime,
     * a constant expression variable will always be computed at compile time.
     *
     * Such a variable can therefore be used whenever a compile-time constant is needed,
     * such as in array or enum declarations.
     */

    constexpr int myConst = 5;
    //myConst = 3;              // error: variable is const
    int myArray1[myConst + 1];   // allowed


    // Compile-time evaluation
    int myArray2[getDefaultSize(10)];

    // Runtime evaluation
    int mul = 10;
    int size = getDefaultSize(mul);


    auto answer = [](int i) { return 10+i; };
    constexpr int reply = answer(32); // "42"


    // Compile-time object
    constexpr Circle c1(5);

    // Runtime object
    int x = 5;
    Circle c2(x);


    constexpr int debug = 0;
    if constexpr(debug) {
        // Discarded if condition is false
    }
}


