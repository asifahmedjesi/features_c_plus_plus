#include <bits/stdc++.h>
using namespace std;

unsigned long long findFibonacci(unsigned int);

int main() {

    cout << "3" << " " << findFibonacci(3) << endl;
    cout << "10" << " " << findFibonacci(10) << endl;

    return 0;
}
unsigned long long findFibonacci(unsigned int n) {
    unsigned long long num1 = 0;
    unsigned long long num2 = 1;
    unsigned long long result = 0;
    for (unsigned int i = 2; i <= n; i++) {
        result = num1 + num2;
        num1 = num2;
        num2 = result;
    }
    return result;
}