#include <bits/stdc++.h>
using namespace std;

enum Color { Red, Green, Blue };
enum ColorWithDefaultValues
{
    ColorWithDefaultValuesRed,   // 0
    ColorWithDefaultValuesGreen, // 1
    ColorWithDefaultValuesBlue,  // 2
};
enum ColorWithCustomValues
{
    ColorWithCustomValuesRed = 5, // 5
    ColorWithCustomValuesGreen = Red, // 5
    ColorWithCustomValuesBlue  = Green + 2 // 7
};

class MyClass
{
    enum ColorInClass { ColorInClassRed, ColorInClassGreen, ColorInClassBlue };
};
void myFunction()
{
    enum ColorInMyFunction { ColorInMyFunctionRed, ColorInMyFunctionGreen, ColorInMyFunctionBlue };
}


enum class Speed
{
    Fast,
    Normal,
    Slow
};

enum class SpeedWithCustomValues
{
    Fast = 5,
    Normal = Fast,
    Slow = Normal + 2
};

enum class MyEnum : unsigned short {};

int main() {

    Color c = Red;
    Color r = Color::Red;

    cout << "c: " << c << endl;

    switch(c)
    {
        case Red:   break;
        case Green: break;
        case Blue:  break;
    }

    int i = Red;
    Color cr = (Color)i;


    Speed s = Speed::Fast;

    if (s == Speed::Fast) { } // ok
    //if (s == 0) { } // error

    return 0;
}
