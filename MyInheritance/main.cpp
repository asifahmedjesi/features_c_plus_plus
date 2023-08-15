#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    int x, y;
    virtual int getArea() { return x * y; }
};
class Square : public Rectangle { };
class Triangle : public Rectangle
{
public:
    Triangle(int a, int b) { x = a; y = b; }
    virtual int getArea() override { return x * y / 2; }
    int getArea2() { return Rectangle::getArea() / 2; }     // Base Class Scoping
};

void setXY(Rectangle&);
void overriding();


class B1
{
public:
    int x;
    B1() : x(5) {}
};
class D1 : public B1 {};


class B2
{
public:
    int x;
    B2(int a) : x(a) {}
};
class D2 : public B2
{
public:
    D2(int i) : B2(i) {}    // call base constructor
};
class D3 : public B2
{
public:
    using B2::B2;   // inherit all constructors
    int y {0};
};


class Base
{
    virtual void foo() final {}
};
class Derived : Base
{
    //void foo() {} // error: Base::foo marked as final. Declaration of 'foo' overrides a 'final' function.
};


class B final { };
//class D : B { } // error: B marked as final. Base 'B' is marked 'final'


void upcastingAndDowncasting();
void constructorInheritance();
void overriding();

int main() {

    upcastingAndDowncasting();
    constructorInheritance();
    overriding();

    return 0;
}
void setXY(Rectangle& r)
{
    r.x = 2;
    r.y = 3;
}
void upcastingAndDowncasting() {
    Square s;

    Rectangle& r = s;           // reference upcast
    Square& a = (Square&) r;    // reference downcast

    Rectangle* p = &s;          // pointer upcast
    Square& b = (Square&) *p;   // pointer downcast

    setXY(s);
}
void constructorInheritance() {
    D1 d1;          // calls parameterless constructors of D1 and B1
    cout << d1.x;   // "5"

    D2 d2(3);
    cout << d2.x;   // "3"

    D3 d3(6);
    cout << d3.x;   // "6"
}
void overriding() {
    Triangle t = Triangle(2,3);
    t.getArea(); // 3 (2*3/2) calls Triangle's version

    Rectangle& r = t; // upcast
    r.getArea(); // 6 (2*3) calls Rectangle's version
}
