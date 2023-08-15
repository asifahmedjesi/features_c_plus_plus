#include <bits/stdc++.h>
using namespace std;

/*
 *  Special member functions are,
 *          1. the default constructor,
 *          2. the destructor,
 *          3. the move constructor,
 *          4. the move assignment operator,
 *          5. the copy constructor, and
 *          6. the copy assignment operator.
 *  NOTE:
 *  - The delete specifier forbids the calling of a function
 *  - The default specifier explicitly states that the compiler generated default will be used.
 *
 *  Object Initialization:
 *      Value initialization,       e.g. std::string s {};
 *      Direct initialization,      e.g. std::string s ("hello");
 *      Copy initialization,        e.g. std::string s = "hello";
 *      List initialization,        e.g. std::string s {'a', 'b', 'c'};
 *      Aggregate initialization,	e.g. char a[3] = {'a', 'b'};
 *      Reference initialization,   e.g. char& c = a[0];
 *
 */

class A {
public:
    int i = 0;
    int j = 0;
    int k = 0;

    A() = default;
    explicit A(int a) : i(a) { }
    A(int a, int b) : i(a), j(b) { }
    A(int a, int b, int c) : i(a), j(b), k(c) { }
};

class B {
public:
    int i = 0;
    B(int a) : i(a) { }
};

class C {
public:
    // Explicitly include default constructor
    C() = default;

    // Disable move constructor
    C(C&&) = delete;

    // Disable move assignment operator
    C& operator=(C&&) = delete;

    // Disable copy constructor
    C(const C&) = delete;

    // Disable copy assignment operator
    C& operator=(const C&) = delete;
};

int main() {

    /*
     * Converting Constructor
     */
    //A a1 = 5;     // Error: Not allowed as explicit is added before the constructor with single parameter
    B b1 = 5;
    //B b2;         // Error: No default constructor

    /*
     * Direct Initialization
     */
    A d1;
    A d2(5);
    A d3(5, 6);
    A d4(5, 6, 7);

    /*
     * Value Initialization
     */
    A v1 = A();
    const A& v2 = A();
    A&& v3 = A();
    A v4 = A(5, 6);
    const A& v5 = A(5, 6);
    A&& v6 = A(5, 6);

    /*
     * Copy Initialization
     */
    A c1;
    A c2 = A(7, 8, 9);
    A c3 = c1;
    A c4 = c2;

    /*
     * New Initialization
     */
    A *n1 = new A();
    A *n2 = new A(1, 2, 3);
    A &n3 = *new A();
    A &n4 = *new A(6, 7);

    /*
     * Aggregate Initialization
     */
    A a1 = { };
    //A a2 = { 1 };     // Error: Not allowed as explicit constructor
    A a3 = { 1, 2 };
    A a4 = { 1, 2, 3 };

    /*
     * Uniform Initialization
     */
    A u1 {};
    A u2 { 2 };
    A u3 { 2, 4 };
    A u4 { 3, 5, 7 };

    /*
     * This initialization syntax works not just for classes but for any type,
     * including primitives, strings, arrays, and standard library containers such as vectors.
     */
    int i { 1 };
    string s { "Hello" };
    int a[] { 1, 2 };
    int *p = new int [2] { 1, 2 };
    vector<string> box { "one", "two" };

    return 0;
}
