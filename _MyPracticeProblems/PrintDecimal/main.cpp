#include <bits/stdc++.h>
using namespace std;

int printDecimal(const string& s);

int main() {

    string a = "110010";
    string b = "1000";

    cout << printDecimal(a); cout << endl;
    cout << printDecimal(b); cout << endl;

    return 0;
}
int printDecimal(const string& s) {
    int num = 0;
    int pos_val = 0;
    int i = 0;
    for (auto it = s.crbegin(); it < s.crend(); it++) {
        pos_val = ((*it) - '0') * pow(2, i++);
        num += pos_val;
    }
    return num;
}
