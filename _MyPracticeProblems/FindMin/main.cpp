#include <bits/stdc++.h>
using namespace std;

template<size_t N>
int findMin1(int (&a)[N]);

template<size_t N>
int findMin2(int (&a)[N]);

int main() {

    int a[] = { 1, 50, 134, 12, 3, 1 };
    int b[] = { -84, -13, -43, -10, -85 };

    cout << findMin1(a); cout << endl;
    cout << findMin1(b); cout << endl;

    cout << findMin2(a); cout << endl;
    cout << findMin2(b); cout << endl;

    return 0;
}

template<size_t N>
int findMin1(int (&a)[N]) {
    size_t size = sizeof(a) / sizeof(a[0]);
    int min = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] < min) min = a[i];
    }
    return min;
}

template<size_t N>
int findMin2(int (&a)[N]) {
    int min = a[0];
    for (auto i : a) {
        if (i < min) min = i;
    }
    return min;
}