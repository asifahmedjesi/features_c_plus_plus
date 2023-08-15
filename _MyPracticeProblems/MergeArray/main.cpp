#include <bits/stdc++.h>
using namespace std;

template<size_t N, size_t M>
void mergeArrays(int (&a)[N], int (&b)[M]);

int main() {

    int a[] = { 1, 2, 6, 10 };
    int b[] = { 3, 5, 8, 20, 25, 30 };

    int c[] = { 1, 2, 3 };
    int d[] = { 4, 5, 6 };

    int e[] = { 10, 20, 30, 40, 50, 100, 200, 300 };
    int f[] = { 15, 25, 35, 45, 55 };

    mergeArrays(b, a); cout << endl;
    mergeArrays(c, d); cout << endl;
    mergeArrays(e, f); cout << endl;

    return 0;
}

template<size_t N, size_t M>
void mergeArrays(int (&a)[N], int (&b)[M]) {
    vector<int> merged_array;
    size_t aSize = sizeof(a)/sizeof(a[0]);
    size_t bSize = sizeof(b)/sizeof(b[0]);
    int i = 0, j = 0;
    while (i < aSize || j < bSize) {
        if (i < aSize && j < bSize && a[i] == b[j]) {
            merged_array.push_back(a[i]);
            i++;
            merged_array.push_back(b[j]);
            j++;
        }
        if (i < aSize && j < bSize && a[i] < b[j]) {
            merged_array.push_back(a[i]);
            i++;
        }
        if (i < aSize && j < bSize && a[i] > b[j]) {
            merged_array.push_back(b[j]);
            j++;
        }
        if (i == aSize && j < bSize) {
            merged_array.push_back(b[j]);
            j++;
        }
        if (i < aSize && j == bSize) {
            merged_array.push_back(a[i]);
            i++;
        }
    }

    for (auto it = merged_array.cbegin(); it < merged_array.cend(); it++) {
        cout << *it << " ";
    }
}
