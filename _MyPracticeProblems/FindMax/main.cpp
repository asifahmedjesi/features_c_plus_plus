#include <bits/stdc++.h>
using namespace std;

template<size_t N>
int findMax1(int (&a)[N]);

template<size_t N>
int findMax2(int (&a)[N]);

int main() {

    int a[] = { 1, 50, 134, 12, 3, 1 };
    int b[] = { -84, -13, -43, -10, -85 };

    cout << findMax1(a); cout << endl;
    cout << findMax1(b); cout << endl;

    cout << findMax2(a); cout << endl;
    cout << findMax2(b); cout << endl;

    return 0;
}

template<size_t N>
int findMax1(int (&a)[N]) {
    size_t size = sizeof(a) / sizeof(a[0]);
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > max) max = a[i];
    }
    return max;
}

template<size_t N>
int findMax2(int (&a)[N]) {
    int max = a[0];
    for (auto item : a) {
        if (item > max) max = item;
    }
    return max;
}