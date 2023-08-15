#include <bits/stdc++.h>
using namespace std;

string printBinary(int n);

int main() {

    int a = 50;
    int b = 8;

    cout << printBinary(a); cout << endl;
    cout << printBinary(b); cout << endl;

    return 0;
}

string printBinary(int num) {
    string binary_digits;
    vector<int> binaries;
    int binary = 0;
    int result = num;
    do {
        binary = result % 2;
        binaries.push_back(binary);
        result /= 2;
    } while (result > 0);
    for (auto it = binaries.crbegin(); it < binaries.crend(); it++) {
        binary_digits += to_string(*it);
    }
    return binary_digits;
}
