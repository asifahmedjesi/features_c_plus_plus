#include <bits/stdc++.h>
using namespace std;

int countWords(const string& s);

int main() {

    string a = "I love my country.";
    string b = "If you are free, can you please help me with this task?";

    cout << countWords(a); cout << endl;
    cout << countWords(b); cout << endl;

    return 0;
}
int countWords(const string& s) {
    int word_count = 0;
    int word_size = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            word_count++;
            word_size = 0;
        }
        word_size++;
    }
    if (word_size > 0) word_count++;
    return word_count;
}
