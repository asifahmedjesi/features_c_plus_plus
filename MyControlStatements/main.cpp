#include <bits/stdc++.h>
using namespace std;

void ifStatements();
void switchStatements();
void forStatements();
void whileStatements();
void doWhileStatements();

int main() {

    ifStatements();
    switchStatements();
    forStatements();
    whileStatements();
    doWhileStatements();

    return 0;
}
void ifStatements() {
    cout << "If Statements: " << endl;

    int a = 2, b = 3;
    int x = a + b;

    if (x < 1)
        cout << x << " < 1";
    else if (x > 1)
        cout << x << " > 1";
    else
        cout << x << " == 1";

    if (int sum = a+b; sum == 5) {
        cout << sum << " is 5";
    }
}
void switchStatements() {
    cout << "Switch Statements: " << endl;

    int a = 2, b = 3;
    int x = a + b;

    switch (x)
    {
        case 0: cout << x << " is 0"; break;
        case 1: cout << x << " is 1"; break;
        default: cout << x << " is not 1 or 2"; break;
    }

    switch (int sum = a+b; sum) {
        case 5: cout << sum << " is 5"; break;
    }
}
void ternaryOpertorStatement() {
    cout << "Ternary Statements: " << endl;

    int x = 50;

    x = (x < 0.5) ? 0 : 1;      // ternary operator (?:)
    (x < 0.5) ? x = 0 : x = 1;  // alternative syntax
}
void forStatements() {
    cout << "For Statements: " << endl;

    for (int k = 0; k < 10; k++) {
        cout << k; // 0-9
    }
    cout << endl;

    for (int k = 0, m = 0; k < 5; k++, m--) {
        cout << k+m; // "00000"
    }
    cout << endl;

    //for (;;) {
    //    cout << "infinite loop";
    //}

    int a[3] = {1, 2, 3};
    for (int &i : a) {
        cout << i; // "123"
    }
    cout << endl;

    for (int i : a) {
        cout << i; // "123"
    }
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        if (i == 5) break;      // end loop
        if (i == 3) continue;   // start next iteration
        cout << i;              // "0124"
    }
    cout << endl;

    cout << endl;
}
void whileStatements() {

    int i = 0;
    while (i < 10) {
        cout << i++; // 0-9
    }
}
void doWhileStatements() {

    int j = 0;
    do {
        cout << j++; // 0-9
    } while (j < 10);
}
void gotoStatements() {
    goto myLabel;   // jump to label
    myLabel:        // label declaration
}
