#include <bits/stdc++.h>
using namespace std;

void objectInitialization();

/*
 * Special Member Functions:
 *
 * The default constructor and the destructor are both special member functions that the compiler will automatically provide
 * for any class that does not explicitly define them.
 *
 * Four other special constructors are
 *      1. the move constructor,
 *      2. the move assignment operator,
 *      3. the copy constructor, and
 *      4. the copy assignment operator.
 */


class Person {
public:
    Person() = default;

    explicit Person(std::string first, std::string last = "", bool isVIP = false)
            : m_first(std::move(first)), m_last(std::move(last)), m_isVIP(isVIP) { }

    const std::string& GetFirstName() const { return m_first; }
    void SetFirstName(std::string first) { m_first = std::move(first); }

    const std::string& GetLastName() const { return m_last; }
    void SetLastName(std::string last) { m_last = std::move(last); }

    bool IsVIP() const { return m_isVIP; }

private:
    std::string m_first, m_last;
    bool m_isVIP = false;
};

// Comparison operator
bool operator<(const Person& lhs, const Person& rhs) {
    if (lhs.IsVIP() != rhs.IsVIP()) return rhs.IsVIP();
    if (lhs.GetLastName() != rhs.GetLastName()) return lhs.GetLastName() < rhs.GetLastName();
    return lhs.GetFirstName() < rhs.GetFirstName();
}
// Equality operator
bool operator==(const Person& lhs, const Person& rhs) {
    return lhs.IsVIP() == rhs.IsVIP()
           && lhs.GetFirstName() == rhs.GetFirstName()
           && lhs.GetLastName() == rhs.GetLastName();
}
// Stream insertion operator for output to C++ streams.
// Details of this operator can be found in Chapter 5.
std::ostream& operator<<(std::ostream& os, const Person& person) {
    return os << person.GetFirstName() << ' ' << person.GetLastName();
}


class PrototypeClass;  // class prototype

/*
 * class A
 */
class A
{
public:
    // Explicitly include default constructor
    A() = default;

    // Disable move constructor
    A(A&&) = delete;

    // Disable move assignment operator
    A& operator=(A&) = delete;

    // Disable copy constructor
    A(const A&) = delete;

    // Disable copy assignment operator
    A& operator=(const A&) = delete;
};


/*
 * class MyRectangle
 */
class MyRectangle {
public:
    /*
     * NOTE:
     * - Fields in C++ are not automatically initialized to their default values.
     * The fields will contain whatever garbage is left in their memory locations until they are explicitly assigned values.
     */
    int w = 10, x = 20, y = 30, z = 40;
    bool *sem;

    MyRectangle();
    MyRectangle(int, int);
    MyRectangle(int, int, int);
    MyRectangle(int, int, int, int);

    /*
     * DESTRUCTOR:
     * The destructor is used to release any resources allocated by the object.
     * It is called automatically before an object is destroyed,
     *     a. either when the object passes out of scope or
     *     b. when it is explicitly deleted for objects created with the new operator.
     */
    ~MyRectangle() { delete sem; }

    int getArea();
    int getParimeter() { return 2 * (x + y); }
};

MyRectangle::MyRectangle() { x = 25; y = 35; this->sem = new bool; }
MyRectangle::MyRectangle(int a, int b) : MyRectangle(a, b, a, b) { this->sem = new bool; }
MyRectangle::MyRectangle(int a, int b, int c) : w(a), x(b), y(c) { this->sem = new bool; }
MyRectangle::MyRectangle(int a, int b, int c, int d) { this->w = a; this->x = b; this->y = c; this->z = d; this->sem = new bool; };

int MyRectangle::getArea() { return x * y; }


/*
 * class MyClass
 */
class MyClass
{
public:
    int i = 0;
    MyClass() = default;
    MyClass(int x) : i(x) { }
};

int main() {

    PrototypeClass* p;                      // allowed
    PrototypeClass f(PrototypeClass&);      // allowed
    /*
     * PrototypeClass o;           // error, definition required
     * sizeof(PrototypeClass);     // error, definition required
    */


    MyRectangle r1;          // object creation
    r1.x = 5;
    r1.y = 6;
    int z = r1.getArea();

    MyRectangle r2;         // another instance of MyRectangle
    r2.x = 25;              // not same as r.x

    // Calls parameterless constructor
    MyRectangle r3;

    // Calls constructor accepting two integers
    MyRectangle r4(2, 3);

    // Calls constructor accepting three integers
    MyRectangle r5(2, 3, 4);

    // Calls constructor accepting four integers
    MyRectangle r6(2, 3, 4, 5);


    MyRectangle *myRectPtr = &r1;       // object pointer
    myRectPtr->getArea();
    (*myRectPtr).getArea();             // alternative syntax

    objectInitialization();

    return 0;
}
void directInitialization() {
    // Direct initialization
    MyClass a(5);
    MyClass b;

    cout << "MyClass a(5);" << "\t\t\tDirect Initialization" << endl;
}
void valueInitialization() {
    /*
     * lvalue and rvalue reference:
     *
     * int i = 10;
     * int& lvalueref = i;       // Ok, lvalues (variables) can be saved in lvalue references
     * int&& rvalueref = 10;     // Ok, temporary objects (rvalues) such as literals or function return values can be saved in rvalue references
     * int&& rvalueref = 1 + 2;  // Ok, temporary objects (rvalues) such as literals or function return values can be saved in rvalue references
     *
     * int& m = 1;               // Error, Non-const lvalue reference to type 'int' cannot bind to a temporary of type 'int'
     * const int& m = 1;         // Ok, temporary object (rvalue) such as literal can be saved in const lvalue reference
     * int&& n = 1;              // Ok, temporary object (rvalue) such as literal can be saved in rvalue reference
     *
     */

    // Value initialization
    MyClass a = MyClass(5);
    MyClass& r = a;                 // variable (lvalue) can be saved in lvalue reference r
    const MyClass& b = MyClass(5);  // MyClass() will return temporary object, so rvalue reference will be returned
    MyClass&& c = MyClass(5);       // MyClass() will return temporary object, so rvalue reference will be returned

    cout << "const MyClass& b = MyClass(5);" << "\tValue Initialization" << endl;
    cout << "MyClass&& c = MyClass(5);" << "\tValue Initialization" << endl;
}
void copyInitialization() {
    // Copy initialization
    MyClass a = MyClass(5);
    MyClass b = a;

    cout << "MyClass a = MyClass(5);" << "\t\tValue Initialization" << endl;
    cout << "MyClass b = a;" << "\t\t\tCopy Initialization" << endl;
}
void newInitialization() {
    // New initialization
    MyClass* a = new MyClass(5);
    MyClass& b = *new MyClass(5);

    // ...

    delete a, b;
    a = nullptr;

    cout << "MyClass* a = new MyClass(5);" << "\tNew Initialization" << endl;
    cout << "MyClass& b = *new MyClass(5);" << "\tNew Initialization" << endl;
}
void aggregateInitialization() {
    /*
     * - Aggregate initialization can only be used when the class type does not include any constructors, virtual functions, or base classes.
     * - The fields must also be public, unless they are declared as static.
     * - Each field will be set in the order they appear in the class.
     */

    // Aggregate initialization
    MyClass a = { 2 };  // i is 2

    cout << "MyClass a = { 2 };" << "\t\tAggregate Initialization" << endl;
}
void uniformInitialization() {

    /*
     * This initialization syntax works not just for classes but for any type, including primitives, strings, arrays, and
     * standard library containers such as vectors.
     */

    // Uniform initialization
    MyClass c { 3 }; // i is 3

    cout << "MyClass c { 3 };" << "\t\tUniform Initialization" << endl;

    int i { 1 };
    string s { "Hello" };
    int a[] { 1, 2 };
    int *p = new int [2] { 1, 2 };
    vector<string> box { "one", "two" };

    // Call parameterless constructor
    MyClass a1 {};

    // Call copy constructor
    MyClass a2 { a1 };
}
void objectInitialization() {
    directInitialization();
    valueInitialization();
    copyInitialization();
    newInitialization();
    aggregateInitialization();
    uniformInitialization();
}