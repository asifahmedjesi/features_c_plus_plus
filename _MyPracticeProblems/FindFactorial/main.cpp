#include <bits/stdc++.h>
using namespace std;

long double findFactorial(unsigned int);

int main() {

    unsigned int n[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 66, 99 };
    size_t size = sizeof(n) / sizeof(n[0]);
    for (int i = 0; i < size; i++) {
        auto fact = findFactorial(n[i]);
        cout << n[i] << " " << fact << endl;
    }

    return 0;
}
long double findFactorial(unsigned int n) {
    long double fact = 1;
    for (unsigned int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
