#include <bits/stdc++.h>
using namespace std;

int reverseIntegerDigits(int);

int main() {

    cout << "23423" << " " << reverseIntegerDigits(23423) << endl;
    cout << "1200" << " " << reverseIntegerDigits(1200) << endl;
    cout << "0" << " " << reverseIntegerDigits(0) << endl;

    return 0;
}
int reverseIntegerDigits(int n) {
    string num = to_string(n);
    for (int i = 0; i < num.length()/2; i++) {
        char temp = num[i];
        num[i] = num[num.length()-i-1];
        num[num.length()-i-1] = temp;
    }
    return stoi(num);
}