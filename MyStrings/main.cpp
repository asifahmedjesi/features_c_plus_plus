#include <bits/stdc++.h>
using namespace std;

void stringDeclarationInitialization();
void stringConcatenation();
void stringSize();
void stringCompare();
void stringTraverse();
void stringFunctions();
void stringSwap();
void stringErase();
void stringReplace();
void stringInsert();
void stringSubstr();
void stringFind();
void stringReverseFind();
void stringFindFirstOf();
void stringFindLastOf();
void stringInputOutput();

int main() {

    stringDeclarationInitialization();
    stringConcatenation();
    stringSize();
    stringCompare();
    stringTraverse();
    stringFunctions();
    stringSwap();
    stringErase();
    stringReplace();
    stringInsert();
    stringSubstr();
    stringFind();
    stringReverseFind();
    stringFindFirstOf();
    stringFindLastOf();
    //stringInputOutput();

    return 0;
}
void stringDeclarationInitialization() {
    cout << "String Declaration and Initialization:" << endl;

    string x = "Hello";
    string y ("World!");
    string z {"From Asif Ahmed."};
    auto a = new string ("WOW");

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
    cout << "a: " << *a << endl;

    cout << endl;
}
void stringConcatenation() {
    cout << "String Concatenation:" << endl;

    string a = "My name is Asif. ";
    string b = "I'm coding in C++. ";
    string c = "I also do coding in Java. ";

    auto ab = a.append(b);
    cout << "ab: " << ab << endl;

    auto abc = ab += c;
    cout << "abc: " << abc << endl;

    cout << endl;
}
void stringSize() {
    cout << "String Size:" << endl;

    string x = "Hello";
    string y ("World!");
    string z {"From Asif Ahmed."};

    auto xyz = x + " " + y + " " + z;
    cout << "xyz: " << xyz << endl;

    size_t length = xyz.length();
    cout << "xyz length: " << length << endl;

    size_t size = xyz.size();
    cout << "xyz size: " << size << endl;

    cout << endl;
}
void stringCompare() {
    cout << "String Compare:" << endl;

    string str1 = "Hello";
    string str2 = "World";
    string str3 = "Hello";

    if (str1 == str2) cout << "str1 is equal to str2 " << endl;
    else cout << "str1 is not equal to str2 " << endl;

    if (str1 == str3) cout << "str1 is equal to str3 " << endl;
    else cout << "str1 is not equal to str3 " << endl;

    cout << endl;
}
void stringTraverse() {
    cout << "String Traverse:" << endl;

    string str = "Hello World";
    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << ", ";
    }
    cout << endl;
    for (char item : str) {
        cout << item << ", ";
    }
    cout << endl;
    for (string::iterator it = str.begin(); it != str.end(); ++it) {
        cout << *it << ", ";
    }
    cout << endl;

    for (unsigned i = 0; i < str.length(); ++i)
    {
        cout << str.at(i) << ", ";
    }
    cout << endl << endl;
}
void stringFunctions() {
    cout << "Different Functions:" << endl;

    string str ("hello world!");
    cout << "str: " << str << endl;

    /* front */
    str.front() = 'A';
    char& first = str.front();
    cout << "str.front(): " << first << endl;
    cout << "str: " << str << endl;

    str.front() = 'h';
    cout << "str.front(): " << str.front() << endl;
    cout << "str: " << str << endl;

    /* back */
    str.back() = 'Z';
    char& last = str.back();
    cout << "str.back(): " << last << endl;
    cout << "str: " << str << endl;

    str.back() = '!';
    cout << "str.back(): " << str.back() << endl;
    cout << "str: " << str << endl;

    /* push_back */
    str.push_back('A');
    cout << "str.push_back('A'): " << str << endl;

    /* pop_back */
    str.pop_back();
    cout << "str.pop_back(): " << str << endl;

    /* toupper */
    string str1 = "this is a lower case string";
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    cout << "toupper: " << str1 << endl;

    /* tolower */
    string str2 = "THIS IS A UPPER CASE STRING";
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    cout << "tolower: " << str2 << endl;

    /* reverse string */
    string str3 = "Journal Dev reverse example";
    cout << "str3: " << str3 << endl;
    reverse(str3.begin(), str3.end());
    cout << "str3 (reversed): " << str3 << endl;

    /* isupper */
    char c1 = 'A';
    if (isupper(c1)) cout << c1 << " is upper" << endl;

    /* islower */
    char c2 = 'a';
    if (islower(c2)) cout << c2 << " is lower" << endl;

    /* isdigit */
    char c3 = '5';
    if (isdigit(c3)) cout << c3 << " is digit" << endl;

    /* isalpha */
    char c4 = 'x';
    if (isalpha(c4)) cout << c4 << " is alphabet" << endl;

    cout << endl;
}
void stringSwap() {
    cout << "String Swap:" << endl;

    string buyer ("money");
    string seller ("goods");

    cout << "Before the swap, buyer has " << buyer;
    cout << " and seller has " << seller << endl;

    seller.swap (buyer);

    cout << "After the swap, buyer has " << buyer;
    cout << " and seller has " << seller << endl;

    cout << endl;
}
void stringErase() {
    cout << "String Erase:" << endl;

    string str ("This is an example sentence.");
    cout << str << endl;

    // using positions
    str.erase(10, 8);
    cout << str << endl;        // This is an sentence

    // using iterator
    str.erase(str.begin()+9);
    cout << str << endl;        // This is a sentence

    str.erase(str.begin()+5, str.end()-9);
    cout << str << endl;   // This sentence.

    cout << endl;
}
void stringReplace() {
    cout << "String Replace:" << endl;

    string base="this is a test string.";
    string str2="n example";
    string str3="sample phrase";
    string str4="useful.";

    // replace signatures used in the same order as described above:

    // Using positions:                 0123456789*123456789*12345
    string str=base;                    // "this is a test string."
    str.replace(9, 5, str2);            // "this is an example string." (1)
    str.replace(19, 6, str3, 7, 6);     // "this is an example phrase." (2)
    str.replace(8, 10, "just a");       // "this is just a phrase."     (3)
    str.replace(8, 6, "a shorty", 7);   // "this is a short phrase."    (4)
    str.replace(22, 1, 3, '!');         // "this is a short phrase!!!"  (5)

    // Using iterators:                                               0123456789*123456789*
    str.replace(str.begin(),str.end()-3,str3);                    // "sample phrase!!!"      (1)
    str.replace(str.begin(),str.begin()+6,"replace");             // "replace phrase!!!"     (3)
    str.replace(str.begin()+8,str.begin()+14,"is coolness",7);    // "replace is cool!!!"    (4)
    str.replace(str.begin()+12,str.end()-4,4,'o');                // "replace is cooool!!!"  (5)
    str.replace(str.begin()+11,str.end(),str4.begin(),str4.end());// "replace is useful."    (6)
    cout << str << endl;

    cout << endl;
}
void stringInsert() {
    cout << "String Insert:" << endl;

    string str="to be question";
    string str2="the ";
    string str3="or not to be";
    string::iterator it;

    // used in the same order as described above:
    str.insert(6, str2);                    // to be (the )question
    str.insert(6, str3, 3, 4);              // to be (not )the question
    str.insert(10, "that is cool", 8);      // to be not (that is )the question
    str.insert(10, "to be ");               // to be not (to be )that is the question
    str.insert(15, 1, ':');                 // to be not to be(:) that is the question
    it = str.insert(str.begin()+5, ',');    // to be(,) not to be: that is the question
    str.insert (str.end(), 3, '.');         // to be, not to be: that is the question(...)
    str.insert (it+2, str3.begin(), str3.begin()+3); // (or )

    cout << str << endl;

    cout << endl;
}
void stringSubstr() {
    cout << "String Substr:" << endl;

    string str = "We think in generalities, but we live in details.";
    // (quoting Alfred N. Whitehead)

    string str2 = str.substr (3, 5);    // "think"
    size_t pos = str.find("live");      // position of "live" in str
    string str3 = str.substr (pos);     // get from "live" to the end

    cout << str2 << ' ' << str3 <<  endl;

    cout << endl;
}
void stringFind() {
    cout << "String Find:" << endl;

    string str ("There are two needles in this haystack with needles.");
    string str2 ("needle");

    /*
     * size_t find(const string& str, size_t pos = 0) const noexcept;
     * size_t find(const char* s, size_t pos, size_type n) const;
     */

    // different member versions of find in the same order as above:
    size_t found = str.find(str2);
    if (found != string::npos)
        cout << "first 'needle' found at: " << found << endl;

    found = str.find("needles are small", found+1, 6);
    if (found != string::npos)
        cout << "second 'needle' found at: " << found << endl;

    found = str.find("haystack");
    if (found != string::npos)
        cout << "'haystack' also found at: " << found << endl;

    found = str.find('.');
    if (found != string::npos)
        cout << "Period found at: " << found << endl;

    // let's replace the first needle:
    str.replace(str.find(str2), str2.length(), "preposition");
    cout << str << endl;

    string myString = "My name is Asif Ahmed. Asif is a very common name.";
    size_t asifIndex = myString.find("Asif");
    if (asifIndex != string::npos)
        cout << "asifIndex: " << asifIndex << endl;
    else
        cout << "asifIndex: -1" << endl;

    size_t nextAsifIndex = myString.find("Asif", asifIndex+1);
    if (nextAsifIndex != string::npos)
        cout << "nextAsifIndex: " << nextAsifIndex << endl;
    else
        cout << "nextAsifIndex: -1" << endl;

    cout << endl;
}
void stringReverseFind() {
    cout << "String Reverse Find:" << endl;

    string str ("The sixth sick sheik's sixth sheep's sick.");
    string key ("sixth");

    size_t found = str.rfind(key);
    if (found != string::npos)
        str.replace(found, key.length(), "seventh");

    cout << str << endl;

    string myString = "My name is Asif Ahmed. Asif is a very common name.";
    size_t asifIndex = myString.rfind("Asif");
    if (asifIndex != string::npos)
        cout << "asifIndex: " << asifIndex << endl;
    else
        cout << "asifIndex: -1" << endl;

    size_t previousAsifIndex = myString.rfind("Asif", asifIndex-1);
    if (previousAsifIndex != string::npos)
        cout << "previousAsifIndex: " << previousAsifIndex << endl;
    else
        cout << "previousAsifIndex: -1" << endl;

    cout << endl;
}
void stringFindFirstOf() {
    cout << "String Find First Of:" << endl;

    string str ("Please, replace the vowels in this sentence by asterisks.");
    size_t found = str.find_first_of("aeiou");
    while (found != string::npos)
    {
        str[found]='*';
        found=str.find_first_of("aeiou", found+1);
    }
    cout << str << endl;

    cout << endl;
}
void stringFindLastOf() {
    cout << "String Find Last Of:" << endl;

    string str ("/usr/bin/man");

    cout << "Splitting: " << str << endl;
    size_t found = str.find_last_of("/\\");
    cout << "path: " << str.substr(0, found) << endl;
    cout << "file: " << str.substr(found+1) << endl;

    cout << endl;
}
void stringInputOutput() {
    string name;
    string fullName;

    cout << "Please, enter your full name: " << endl;
    getline (cin, fullName);

    cout << "Please, enter your nick name: " << endl;
    cin >> name;

    cout << "Hello, " << name << ", " << fullName << "!" << endl;

    cout << endl;
}