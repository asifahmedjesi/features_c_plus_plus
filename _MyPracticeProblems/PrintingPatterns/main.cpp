#include <bits/stdc++.h>
using namespace std;

void printingPatterns1(int);
void printingPatterns2(int);
void printingPatterns3(int);
void printingPatterns41(int);
void printingPatterns42(int);
void printingPatterns43(int);
void printingPatterns51(int);
void printingPatterns52(int);
void printingPatterns61(int);
void printingPatterns62(int);
void printingPatterns7(int);
void printingPatterns8(int);
void printingPatterns9(int);
void printingPatterns10(int);

void printingNumbers1(int);
void printingNumbers2(int);
void printingNumbers3(int);

void printingAlphabets1(int);
void printingAlphabets2(int);
void printingAlphabets3(int);

int main() {

    printingPatterns1(5);
    cout << endl;

    printingPatterns2(5);
    cout << endl;

    printingPatterns3(5);
    cout << endl;

    printingPatterns41(5);
    cout << endl;

    printingPatterns42(5);
    cout << endl;

    printingPatterns43(5);
    cout << endl;

    printingPatterns51(5);
    cout << endl;

    printingPatterns52(5);
    cout << endl;

    printingPatterns61(5);
    cout << endl;

    printingPatterns62(5);
    cout << endl;

    printingPatterns7(5);
    cout << endl;

    printingPatterns8(5);
    cout << endl;

    printingPatterns9(5);
    cout << endl;

    printingPatterns10(5);
    cout << endl;


    printingNumbers1(6);
    cout << endl;

    printingNumbers2(5);
    cout << endl;

    printingNumbers3(5);
    cout << endl;


    printingAlphabets1(5);
    cout << endl;

    printingAlphabets2(5);
    cout << endl;

    printingAlphabets3(5);
    cout << endl;

    return 0;
}

void printingPatterns1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void printingPatterns2(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void printingPatterns3(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void printingPatterns41(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << (j <= (n - i) ? ' ' : '*');
        }
        cout << endl;
    }
}
void printingPatterns42(int n) {
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= (n - i); space++) {
            cout << " ";
        }
        for (int star = 1; star <= i; star++) {
            cout << "*";
        }
        cout << endl;
    }
}
void printingPatterns43(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << ((i + j) <= n ? ' ' : '*'); // n: no of rows
        }
        cout << endl;
    }
}
void printingPatterns51(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << (j <= (n - i) ? " " : "* ");
        }
        cout << endl;
    }
}
void printingPatterns52(int n) {
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= (n - i); space++) {
            cout << " ";
        }
        for (int star = 1; star <= i; star++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void printingPatterns61(int n) {
    int k = 1;
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= (n - i); space++) {
            cout << " ";
        }
        for (int star = 1; star <= k; star++) {
            cout << "*";
        }
        k += 2;
        cout << endl;
    }
}
void printingPatterns62(int n) {
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= (n - i); space++) {
            cout << " ";
        }
        for (int star = 1; star <= (2*i-1); star++) {
            cout << "*";
        }
        cout << endl;
    }
}
void printingPatterns7(int n) {
    for (int i = n; i >= 1; i--) {
        for (int space = 1; space <= (n - i); space++) {
            cout << " ";
        }
        for (int star = 1; star <= (2*i-1); star++) {
            cout << "*";
        }
        cout << endl;
    }
}
void printingPatterns8(int n) {
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= (n - i); space++) {
            cout << " ";
        }
        for (int star = 1; star <= (2*i-1); star++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n-1; i >= 1; i--) {
        for (int space = 1; space <= (n - i); space++) {
            cout << " ";
        }
        for (int star = 1; star <= (2*i-1); star++) {
            cout << "*";
        }
        cout << endl;
    }
}
void printingPatterns9(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void printingPatterns10(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

void printingNumbers1(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}
void printingNumbers2(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}
void printingNumbers3(int n) {
    int a = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << a++;
        }
        cout << endl;
    }
}

void printingAlphabets1(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << static_cast<char>('A' + (j-1));
        }
        cout << endl;
    }
}
void printingAlphabets2(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << static_cast<char>('A' + (j-1));
        }
        cout << endl;
    }
}
void printingAlphabets3(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << static_cast<char>('A' + (i-1));
        }
        cout << endl;
    }
}