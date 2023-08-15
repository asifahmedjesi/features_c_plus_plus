#include <bits/stdc++.h>
using namespace std;

// Only visible within this source file
static int myGlobal;

class MyCircle
{
public:
    double r;           // instance field (one per object)
    static double pi;   // static field (only one copy)

    double getArea() { return pi * r * r; }
    static double newArea(double a) { return pi * a * a; }
};
double MyCircle::pi = 3.14;

void myFunc();

int main() {

    double p = MyCircle::pi;
    double a = MyCircle::newArea(1);

    myFunc();
    myFunc();
    myFunc();

    return 0;
}
void myFunc()
{
    static int count = 0; // holds # of calls to function
    cout << "Before count++: " << count << endl;
    count++;
    cout << "After count++: " << count << endl;
}
