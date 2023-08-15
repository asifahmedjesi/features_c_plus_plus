#include <bits/stdc++.h>
using namespace std;

void findDivisors(int);

int main() {

    cout << "8: "; findDivisors(8); cout << endl;
    cout << "10: "; findDivisors(10); cout << endl;

    return 0;
}
void findDivisors(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) cout << i << " ";
    }
}