#include <bits/stdc++.h>
using namespace std;

template<size_t N>
double findAverage(int (&a)[N]);

int main() {

    int a[] = { 100, 200 };
    int b[] = { 1, 2, 3, 4, 5, 6 };

    cout << findAverage(a); cout << endl;
    cout << findAverage(b); cout << endl;

    return 0;
}

template<size_t N>
double findAverage(int (&a)[N]) {
    size_t size = sizeof(a) / sizeof(a[0]);
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    return (double)sum/size;
}
