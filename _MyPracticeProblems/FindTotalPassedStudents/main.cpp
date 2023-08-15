#include <bits/stdc++.h>
using namespace std;

template<size_t N>
int findFindTotalPassedStudents(int (&a)[N]);

int main() {

    int a[] = { 10, 50, 94, 82, 49, 71 };
    int b[] = { 20, 35, 49, 15 };

    cout << findFindTotalPassedStudents(a); cout << endl;
    cout << findFindTotalPassedStudents(b); cout << endl;

    return 0;
}

template<size_t N>
int findFindTotalPassedStudents(int (&a)[N]) {
    size_t size = sizeof(a) / sizeof(a[0]);
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] >= 50) count++;
    }
    return count;
}
