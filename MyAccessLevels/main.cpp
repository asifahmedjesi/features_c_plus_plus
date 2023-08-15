#include <bits/stdc++.h>
using namespace std;

class MyClass
{
    // private is the default access modifier
    int myPrivateDefault;

    // Give OtherClass access
    friend class OtherFriendClass;

    // Give myFriend access
    friend void myFriend(MyClass c);

// Unrestricted access
public:
    int myPublic;

// Defining or derived class only
protected:
    int myProtected;

// Defining class only
private:
    int myPrivate;

    void test()
    {
        myPublic = 0;       // allowed
        myProtected = 0;    // allowed
        myPrivate = 0;      // allowed
    }
};

class MyChild : public MyClass
{
    void test()
    {
        myPublic = 0;       // allowed
        myProtected = 0;    // allowed
        //myPrivate = 0;    // inaccessible
    }
};

class OtherClass
{
    void test(MyClass& c)
    {
        c.myPublic = 0;         // allowed
        //c.myProtected = 0;    // inaccessible
        //c.myPrivate = 0;      // inaccessible
    }
};

class OtherFriendClass
{
    void test(MyClass c) {
        c.myPrivate = 0;    // allowed
        c.myProtected = 0;  // allowed
        c.myPublic = 0;     // allowed
    }
};

void myFriend(MyClass c) {
    c.myPrivate = 0;    // allowed
    c.myProtected = 0;  // allowed
    c.myPublic = 0;     // allowed
}


class MyChildPrivateInheritance : private MyClass
{
    // myPublic is private
    // myProtected is private
    // myPrivate is private
};

class MyChildProtectedInheritance : protected MyClass
{
    // myPublic is protected
    // myProtected is protected
    // myPrivate is private
};
class OtherProtectedInheritanceChild : public MyChildProtectedInheritance {

    void test() {
        //myPrivate = 0;    // not allowed
        myProtected = 0;    // allowed
        myPublic = 0;       // allowed
    }
};

class MyChildPublicInheritance : public MyClass
{
    // myPublic is public
    // myProtected is protected
    // myPrivate is private
};
class OtherPublicInheritanceChild : public MyChildPublicInheritance {

    void test() {
        //myPrivate = 0;    // not allowed
        myProtected = 0;    // allowed
        myPublic = 0;       // allowed
    }
};

int main() {

    MyChildPrivateInheritance a;
    //a.myPublic = 0;       // not allowed
    //a.myProtected = 0;    // not allowed
    //a.myPublic = 0;       // not allowed

    MyChildProtectedInheritance b;
    //b.myPublic = 0;       // not allowed
    //a.myProtected = 0;    // not allowed
    //a.myPublic = 0;       // not allowed

    MyChildPublicInheritance c;
    c.myPublic = 0;         // not allowed
    //a.myProtected = 0;    // not allowed
    //a.myPublic = 0;       // not allowed

    return 0;
}
void accessModifiersWithInheritance() {
    /*
     * Public, Protected, and Private Inheritance:
     *
     * When a class is inherited in C++, it is possible to change the access level of the inherited members.
     * Public inheritance allows all members to keep their original access level.
     * Protected inheritance reduces the access of public members to protected.
     * Private inheritance restricts all inherited members to private access.
     */
}
