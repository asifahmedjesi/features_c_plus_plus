#include <bits/stdc++.h>
using namespace std;

void array1Dimensional();
void array2Dimensional();
void arraySize1Dimensional();
void arraySize2Dimensional();
void arrayInitialization1Dimensional();
void arrayInitialization2Dimensional();
void arrayWithFunction(int, int[]);
void arrayWithForEachLoop();
void arrayWithRangeBasedLoop();

int main() {

    array1Dimensional();
    array2Dimensional();
    arraySize1Dimensional();
    arraySize2Dimensional();
    arrayInitialization1Dimensional();
    arrayInitialization2Dimensional();

    int n = 5;
    int nums[] = { 1, 2, 3, 4, 5 };
    arrayWithFunction(5, nums);

    // Note:
    // void fun(int arr[])
    // SAME AS
    // void fun(int *arr)

    arrayWithForEachLoop();
    arrayWithRangeBasedLoop();

    return 0;
}

void array1Dimensional() {

    int myArray1[3];
    myArray1[0] = 1;
    myArray1[1] = 2;
    myArray1[2] = 3;

    cout << "myArray1: ";
    for (int i = 0; i < 3; i++) {
        cout << myArray1[i] << " ";
    }
    cout << endl;

    int myArray2[4] = { 1, 2, 3 };
    myArray2[3] = 4;
    cout << "myArray2: ";
    for (int i = 0; i < 4; i++) {
        cout << myArray2[i] << " ";
    }
    cout << endl;

    int myArray3[] = { 1, 2, 3, 4, 5 };
    cout << "myArray3: ";
    for (int i = 0; i < 5; i++) {
        cout << myArray3[i] << " ";
    }
    cout << endl;

    int n = 4;
    int myArray4[n];
    myArray4[0] = 10;
    myArray4[1] = 20;
    myArray4[2] = 30;
    myArray4[3] = 40;
    cout << "myArray4: ";
    for (int i = 0; i < n; i++) {
        cout << myArray4[i] << " ";
    }
    cout << endl;

    int x = myArray1[1];
    cout << "x: " << x << endl;

    cout << endl;
}
void array2Dimensional() {
    int myArray1[2][2] = { { 0, 1 }, { 2, 3 } };
    cout << "myArray1: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << myArray1[i][j] << " ";
        }
        cout << endl;
    }

    int myArray2[2][3] = { { 0, 1, 2 }, { 3, 4, 5 } };
    cout << "myArray2: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << myArray2[i][j] << " ";
        }
        cout << endl;
    }

    int myArray3[2][3] = { 0, 1, 2 , 3, 4, 5 };
    cout << "myArray3: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << myArray3[i][j] << " ";
        }
        cout << endl;
    }

    int n = 2, m = 3;
    int myArray4[n][m];
    myArray4[0][0] = 10;
    myArray4[0][1] = 20;
    myArray4[0][2] = 30;
    myArray4[1][0] = 40;
    myArray4[1][1] = 50;
    myArray4[1][2] = 60;
    cout << "myArray4: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << myArray4[i][j] << " ";
        }
        cout << endl;
    }

    int y = myArray4[1][2];
    cout << "y: " << y << endl;

    cout << endl;
}
void arraySize1Dimensional() {
    int myArray1[5] = { 1, 2, 3, 4, 5 };
    unsigned int length1 = sizeof(myArray1) / sizeof(int);
    cout << "myArray1 size (int): " << length1 << endl;

    double myArray2[2] = { 1.2, 4.5 };
    unsigned int length2 = sizeof(myArray2) / sizeof(double);
    cout << "myArray2 size (double): " << length2 << endl;

    char myArray3[4] = { 'a', 'b', '4', '5' };
    unsigned int length3 = sizeof(myArray3) / sizeof(char);
    cout << "myArray3 size (char): " << length3 << endl;

    bool myArray4[8] = { true, true, false, true, false, false, true, true };
    unsigned int length4 = sizeof(myArray4) / sizeof(bool);
    cout << "myArray4 size (bool): " << length4 << endl;

    string myArray5[3] = { "Hello", "World", "From" };
    unsigned int length5 = sizeof(myArray5) / sizeof(string);
    cout << "myArray5 size (string): " << length5 << endl;

    string myArray6[3] = { "Hello", "World" };
    unsigned int length6 = sizeof(myArray6) / sizeof(string);
    cout << "myArray6 size (string): " << length6 << endl;

    int myArray7[10];
    unsigned int length7 = sizeof(myArray7) / sizeof(int);
    cout << "myArray7 size (int): " << length7 << endl;

    string myArray8[8];
    unsigned int length8 = sizeof(myArray8) / sizeof(string);
    cout << "myArray8 size (string): " << length8 << endl;

    int myArray9[5];
    unsigned int length9 = sizeof(myArray9) / sizeof(myArray9[0]);
    cout << "myArray9 size (int): " << length9 << endl;

    cout << endl;
}
void arraySize2Dimensional() {
    int myArray1[2][3] = {{0, 1, 2 }, {3, 4, 5 } };
    auto total1 = sizeof(myArray1) / sizeof(int);
    auto column1 = sizeof(myArray1[0]) / sizeof(int);
    auto row1 = total1 / column1;
    cout << "Total number of items in myArray1: " << total1 << endl;
    cout << "Total number of rows in myArray1: " << row1 << endl;
    cout << "Total number of columns in myArray1: " << column1 << endl;

    int n = 5, m = 6;
    string myArray2[n][m];
    auto total2 = sizeof(myArray2) / sizeof(string);
    auto column2 = sizeof(myArray2[0]) / sizeof(string);
    auto row2 = total2 / column2;
    cout << "Total number of items in myArray2: " << total2 << endl;
    cout << "Total number of rows in myArray2: " << row2 << endl;
    cout << "Total number of columns in myArray2: " << column2 << endl;

    cout << endl;
}
void arrayInitialization1Dimensional() {
    int array1[3];
    for (int i = 0; i < 3; i++) {
        array1[i] = 0;
    }
    cout << "array1: ";
    for (int i = 0; i < 3; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    int array2[4] = { 1, 2, 3, 4 };
    cout << "array2: ";
    for (int i = 0; i < 4; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;

    int array3[] = { 1, 2, 3, 4, 5, 6 };
    cout << "array3: ";
    for (int i = 0; i < 6; i++) {
        cout << array3[i] << " ";
    }
    cout << endl;

    int array4[8] = { 0 };
    cout << "array4: ";
    for (int i = 0; i < 8; i++) {
        cout << array4[i] << " ";
    }
    cout << endl;

    bool array5[8] = { false };
    cout << "array5: ";
    for (int i = 0; i < 8; i++) {
        cout << array5[i] << " ";
    }

    cout << endl << endl;
}
void arrayInitialization2Dimensional() {
    int array1[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            array1[i][j] = 0;
        }
    }
    cout << "array1: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }

    int array2[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
    cout << "array2: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }

    int array3[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    cout << "array3: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << setw(3) << array3[i][j] << " ";
        }
        cout << endl;
    }

    int array4[3][4] = { 0 };
    cout << "array4: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array4[i][j] << " ";
        }
        cout << endl;
    }

    bool array5[3][4] = { false };
    cout << "array5: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array5[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}
void arrayWithFunction(int n, int nums[]) {
    cout << "Array with function: " << endl;

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl << endl;
}
void arrayWithForEachLoop() {
    cout << "Array with for each loop: " << endl;

    int arr[] = { 2, -1, 5, 6, 0, -3 };

    cout << "Traverse using array's data type" << endl;
    for (int x: arr) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Traverse using auto keyword" << endl;
    for (auto x : arr) {
        cout << x << " ";
    }
    cout << endl << endl;
}
void arrayWithRangeBasedLoop() {
    cout << "Array with range based loop: " << endl;

    int arr[] = { 2, -1, 5, 6, 0, -3 };

    cout << "Traverse using array's data type" << endl;
    for (int &x : arr)
    {
        cout << x << " " ;
    }
    cout << endl;

    cout << "Traverse using cont array's data type" << endl;
    for (const int &x : arr)
    {
        cout << x << " " ;
    }
    cout << endl;

    cout << "Traverse using auto" << endl;
    for (auto &x : arr)
    {
        cout << x << " " ;
    }
    cout << endl;
}