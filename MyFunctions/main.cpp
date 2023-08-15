#include <bits/stdc++.h>
using namespace std;

void myFunction(string, string);
void myFunction(string);
void myFunction(int);
int getSum(int, int);
void dummy();
void changePassByValue(int);
void passByValue();
void passByReference();
void passByPointer();
void passRangeBasedArray();
void returnByValueReferenceAddress();
void returningMultipleValues();

int main() {

    myFunction("Hello", "World");
    cout << endl;
    myFunction("Hello");
    cout << endl;
    myFunction("HMM");
    cout << endl;
    myFunction(500);
    cout << endl;
    getSum(100, 200);
    cout << endl;
    passByValue();
    cout << endl;
    passByReference();
    cout << endl;
    passByPointer();
    cout << endl;
    passRangeBasedArray();
    cout << endl;
    returnByValueReferenceAddress();
    cout << endl;
    returningMultipleValues();

    return 0;
}

void myFunction(string a, string b = "Earth") { cout << a + " " + b; }
void myFunction(string a) { cout << a; }
void myFunction(int a) { cout << a; }
int getSum(int a, int b) { return a + b; }
void dummy() { return; }

void changePassByValue(int i) { i = 20; }
void changePassByValue(int a[]) { a[0] = 30; a[1] = 40; a[2] = 50; }
void changePassByValue(string s) { s = "World World"; }
void passByValue() {
    cout << "Pass By Value: " << endl;

    int x = 10;                             // value type
    cout << "Before change: " << x << endl; // "10"
    changePassByValue(x);                   // value is passed
    cout << "After change: " << x << endl;  // "10"

    /*
     * Array follows "pass by pointer" by default.
     *      void print(int a[]);
     * is equivalent to:
     *      void print(int* a);
     */
    int a[] = { 15, 20, 25 };                                   // reference type
    cout << "Before change: " << a[0] << a[1] << a[2] << endl;  // "152025"
    changePassByValue(a);                                       // value is passed
    cout << "After change: " << a[0] << a[1] << a[2] << endl;   // "304050"

    string y = "Hello Universe";            // reference type
    cout << "Before change: " << y << endl; // "Hello Universe"
    changePassByValue(y);                   // object copy is passed
    cout << "After change: " << y << endl;  // "Hello Universe"
}

void changePassByReference(int& i) { i = 20; }
template <size_t N>
void changePassByReference(int (&a)[N]) { a[0] = 30; a[1] = 40; a[2] = 50; }
void changePassByReference(string& s) { s = "World World"; }
void passByReference() {
    cout << "Pass By Reference: " << endl;

    int x = 10;                             // value type
    cout << "Before change: " << x << endl; // "10"
    changePassByReference(x);               // value is passed
    cout << "After change: " << x << endl;  // "10"

    int a[] = { 15, 20, 25 };                                   // reference type
    cout << "Before change: " << a[0] << a[1] << a[2] << endl;  // "152025"
    changePassByReference(a);                                   // value is passed
    cout << "After change: " << a[0] << a[1] << a[2] << endl;   // "304050"

    string y = "Hello Universe";            // reference type
    cout << "Before change: " << y << endl; // "Hello Universe"
    changePassByReference(y);               // object copy is passed
    cout << "After change: " << y << endl;  // "Hello Universe"
}

void changePassByPointerPrimitive(int* i) { *i = 20; }
void changePassByPointerArray(int* a) { a[0] = 30; a[1] = 40; a[2] = 50; }
void changePassByPointerObject(string* s) { *s = "World World"; }
void passByPointer() {
    cout << "Pass By Pointer: " << endl;

    int x = 10;                             // value type
    cout << "Before change: " << x << endl; // "10"
    changePassByPointerPrimitive(&x);       // value is passed
    cout << "After change: " << x << endl;  // "10"

    int a[] = { 15, 20, 25 };                                   // reference type
    cout << "Before change: " << a[0] << a[1] << a[2] << endl;  // "152025"
    changePassByPointerArray(a);                                // value is passed
    cout << "After change: " << a[0] << a[1] << a[2] << endl;   // "304050"

    string y = "Hello Universe";            // reference type
    cout << "Before change: " << y << endl; // "Hello Universe"
    changePassByPointerObject(&y);          // object copy is passed
    cout << "After change: " << y << endl;  // "Hello Universe"
}

template <size_t N>
void printRangeBasedArray(int (&a)[N]) {
    cout << "Print range based array: " << endl;
    for (int i : a) {
        cout << i << " ";
    }
}
void passRangeBasedArray() {
    int a[] = { 1, 2, 3, 4, 5 };
    printRangeBasedArray(a);
}

int byVal(int i) { i = i + 5; return i; }
int& byRef(int& i) { i = i + 5; return i; }
int* byAdr(int* i) { *i = *i + 5; return i; }
void returnByValueReferenceAddress() {
    cout << "Return by Value, Reference, and Address:" << endl;

    int a = 10, b = 20, c = 30;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << byVal(a) << ", " << byRef(b) << ", " << *(byAdr(&c)) << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
}

tuple<int, double, char> getTuple1() {

    return tuple<int, double, char>(5, 1.2, 'b');
}
auto getTuple2()
{
    return make_tuple(5, 1.2, 'b');
}
tuple<int, double, char> getTuple3()
{
    return { 5, 1.2, 'b' };
}
void returningMultipleValues() {
    cout << "Returning Multiple Values (tuple): " << endl;

    auto mytuple1 = getTuple1();
    cout << get<0>(mytuple1) << endl;   // 5

    auto mytuple2 = getTuple2();
    cout << get<1>(mytuple2) << endl;   // 5

    int i;
    double d;
    tie(i, d, ignore) = getTuple2();    // Unpack tuple into variables
    cout << i << " " << d << endl;      // "5 1.2"

    auto [a, b, c] = getTuple3();
    cout << a << " " << b << " " << c;
}