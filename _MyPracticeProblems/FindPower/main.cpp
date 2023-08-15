#include <bits/stdc++.h>
using namespace std;

long double findPower(unsigned int, unsigned int);

int main() {

    cout << "2 3:" << " " << findPower(2, 3) << endl;
    cout << "5 4:" << " " << findPower(5, 4) << endl;

    return 0;
}
long double findPower(unsigned int n, unsigned int x) {
    long double result = 1;
    for (unsigned int i = 1; i <= x; i++) {
        result *= n;
    }
    return result;
}