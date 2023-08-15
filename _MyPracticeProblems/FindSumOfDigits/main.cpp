#include <bits/stdc++.h>
using namespace std;

int findSumOfDigits(int);

int main() {

    cout << "62343" << " " << findSumOfDigits(62343) << endl;
    cout << "1000" << " " << findSumOfDigits(1000) << endl;

    return 0;
}
int findSumOfDigits(int n) {
    string num = to_string(n);
    int sum = 0;
    for (int i = 0; i < num.length(); i++) {
        sum += (num[i] - '0');
    }
    return sum;
}