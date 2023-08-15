#include <iostream>

/*
 * Binary Operators
 *      + - * / %
 *      = + = - = * = / = % =
 *      & = ^ = | = << = >> =
 *      == != > < > = < =
 *      & | ^ << >> && ||
 *      –> – >* ,
 *
 * Unary Operators
 *      + - ! ~ & * ++ --
 *
 * Special operators
 *      ( ) [ ] delete new
 *
 * Not overloadable
 *      . .* :: ?: # ## sizeof
 */

class MyNum
{
public:
    int val;

    MyNum(int i) : val(i) { }

    MyNum add(MyNum &a) {
        return MyNum( val + a.val );
    }

    MyNum operator+(MyNum &a) {
        return MyNum( val + a.val );
    }

    MyNum& operator++()
    {
        ++val;
        return *this;
    }
};

class MyNum2 {
public:
    int val = 0;
    int val2 = 0;

    explicit MyNum2(int i) : val(i) { }
    MyNum2(int i, int j) : val(i), val2(j) { }
};

int main() {

    MyNum x = 5;
    //MyNum2 y = 5;     // Error: Not allowed since explicit is used in the constructor with single parameter
    MyNum2 num1 { 1 };
    MyNum2 num2 { 1, 2 };

    MyNum a = MyNum(10), b = MyNum(5);

    MyNum c = a.add(b);

    MyNum d = a + b;
    MyNum e = a.operator+(b);

    MyNum f = ++a;
    MyNum g = a.operator++();

    return 0;
}
