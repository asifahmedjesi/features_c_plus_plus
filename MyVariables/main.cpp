#include <iostream>
#include <cxxabi.h>
#include <cstdint>

using namespace std;

void myIntegralTypes();
void mySignedIntegralTypes();
void myUnsignedIntegralTypes();
void myIntegralSizes();
void myIntegralRanges();
void myNumericLiterals();
void myFloatingPointTypes();
void myCharacterTypes();
void myBooleanTypes();
void myTypeCheck();
void variableScopes();

int myGlobalInt;
auto myGlobalIntAuto = 125L;
int x = 11;

int main() {

    myIntegralTypes();
    mySignedIntegralTypes();
    myUnsignedIntegralTypes();
    myIntegralSizes();
    myIntegralRanges();
    myNumericLiterals();
    myFloatingPointTypes();
    myCharacterTypes();
    myBooleanTypes();
    myTypeCheck();

    int x = 22;
    {
        int x = 33;
        cout << "In block inside main(): x = " << x << endl;
    }
    variableScopes();

    cout << "In main(): x = " << x << endl;
    cout << "In main(): ::x = " << ::x << endl;

    return 0;
}

void myIntegralTypes() {
    cout << "INTEGRAL TYPES:" << endl;

    char myChar = 0;            // -128 to +127
    short myShort = 0;          // -32768 to +32767
    int myInt = 0;              // -2^31  to +2^31-1
    long myLong = 0;            // -2^31  to +2^31-1
    long long myLongLong = 0;   // -2^63 to +2^63-1

    cout << typeid(myShort).name()      << ", "
         << typeid(myInt).name()        << ", "
         << typeid(myLong).name()       << ", "
         << typeid(myLongLong).name();
    cout << endl;

    cout << abi::__cxa_demangle(typeid(myShort).name(), nullptr, nullptr, nullptr)      << ", "
         << abi::__cxa_demangle(typeid(myInt).name(), nullptr, nullptr, nullptr)        << ", "
         << abi::__cxa_demangle(typeid(myLong).name(), nullptr, nullptr, nullptr)       << ", "
         << abi::__cxa_demangle(typeid(myLongLong).name(), nullptr, nullptr, nullptr);
    cout << endl;

    auto myAutoInt = 0;
    auto myAutoLong = 0L;
    auto myAutoLongLong = 0LL;

    cout << typeid(myAutoInt).name()        << ", "
         << typeid(myAutoLong).name()       << ", "
         << typeid(myAutoLongLong).name();
    cout << endl;

    cout << abi::__cxa_demangle(typeid(myAutoInt).name(), nullptr, nullptr, nullptr)        << ", "
         << abi::__cxa_demangle(typeid(myAutoLong).name(), nullptr, nullptr, nullptr)       << ", "
         << abi::__cxa_demangle(typeid(myAutoLongLong).name(), nullptr, nullptr, nullptr);
    cout << endl;

    int myInt1;
    myInt1 = 50;
    int myInt2 = 50;
    int myInt3(50);     // direct initialization
    int myInt4{50};     // uniform initialization

    int8_t myInt8 = 0;   // 8 bits
    int16_t myInt16 = 0; // 16 bits
    int32_t myInt32 = 0; // 32 bits
    int64_t myInt64 = 0; // 64 bits

    int x = 1, y = 2, z;

    cout << "myGlobalInt: " << myGlobalInt << " "
         << abi::__cxa_demangle(typeid(myAutoInt).name(), nullptr, nullptr, nullptr) << " "
         << typeid(myGlobalInt).name() << endl;
    cout << "myGlobalIntAuto: " << myGlobalIntAuto << " "
         << abi::__cxa_demangle(typeid(myGlobalIntAuto).name(), nullptr, nullptr, nullptr) << " "
         << typeid(myGlobalIntAuto).name() << endl;

    cout << endl;
}
void mySignedIntegralTypes() {
    cout << "INTEGRAL TYPES (SIGNED):" << endl;

    signed char myChar = 0;             // -128 to +127
    signed short myShort = 0;           // -32768 to +32767
    signed int myInt = 0;               // -2^31  to +2^31-1
    signed long myLong = 0;             // -2^31  to +2^31-1
    signed long long myLongLong = 0;    // -2^63  to +2^63-1

    cout << typeid(myShort).name()      << ", "
         << typeid(myInt).name()        << ", "
         << typeid(myLong).name()       << ", "
         << typeid(myLongLong).name();
    cout << endl;

    cout << abi::__cxa_demangle(typeid(myShort).name(), nullptr, nullptr, nullptr)      << ", "
         << abi::__cxa_demangle(typeid(myInt).name(), nullptr, nullptr, nullptr)        << ", "
         << abi::__cxa_demangle(typeid(myLong).name(), nullptr, nullptr, nullptr)       << ", "
         << abi::__cxa_demangle(typeid(myLongLong).name(), nullptr, nullptr, nullptr);
    cout << endl << endl;
}
void myUnsignedIntegralTypes() {
    cout << "INTEGRAL TYPES (UNSIGNED):" << endl;

    unsigned char myChar  = 0;              // 0 to 255
    unsigned short myShort = 0;             // 0 to 65535
    unsigned int myInt = 0;                 // 0 to 2^32-1
    unsigned long myLong = 0;               // 0 to 2^32-1
    unsigned long long myLongLong = 0;      // 0 to 2^64-1 (0 to 2^n - 1)

    cout << typeid(myShort).name()      << ", "
         << typeid(myInt).name()        << ", "
         << typeid(myLong).name()       << ", "
         << typeid(myLongLong).name();
    cout << endl;

    cout << abi::__cxa_demangle(typeid(myShort).name(), nullptr, nullptr, nullptr)      << ", "
         << abi::__cxa_demangle(typeid(myInt).name(), nullptr, nullptr, nullptr)        << ", "
         << abi::__cxa_demangle(typeid(myLong).name(), nullptr, nullptr, nullptr)       << ", "
         << abi::__cxa_demangle(typeid(myLongLong).name(), nullptr, nullptr, nullptr);
    cout << endl;

    auto myAutoInt = 0U;
    auto myAutoLong = 0UL;
    auto myAutoLongLong = 0ULL;

    cout << typeid(myAutoInt).name()        << ", "
         << typeid(myAutoLong).name()       << ", "
         << typeid(myAutoLongLong).name();
    cout << endl;

    cout << abi::__cxa_demangle(typeid(myAutoInt).name(), nullptr, nullptr, nullptr)        << ", "
         << abi::__cxa_demangle(typeid(myAutoLong).name(), nullptr, nullptr, nullptr)       << ", "
         << abi::__cxa_demangle(typeid(myAutoLongLong).name(), nullptr, nullptr, nullptr);
    cout << endl << endl;
}
void myIntegralSizes() {
    cout << "INTEGRAL SIZES:" << endl;

    char myChar = 0;                // -128 to +127
    short myShort = 0;              // -32768 to +32767
    int myInt = 0;                  // -2^31  to +2^31-1
    long myLong = 0L;               // -2^31  to +2^31-1
    long long myLongLong = 0LL;     // -2^63 to +2^63-1

    cout << abi::__cxa_demangle(typeid(myChar).name(), nullptr, nullptr, nullptr)       << ": "
         << sizeof(myChar)      << ", "         // 1 byte (per definition)
         << abi::__cxa_demangle(typeid(myShort).name(), nullptr, nullptr, nullptr)      << ": "
         << sizeof(myShort)     << ", "         // 2
         << abi::__cxa_demangle(typeid(myInt).name(), nullptr, nullptr, nullptr)        << ": "
         << sizeof(myInt)       << ", "         // 4
         << abi::__cxa_demangle(typeid(myLong).name(), nullptr, nullptr, nullptr)       << ": "
         << sizeof(myLong)      << ", "         // 4
         << abi::__cxa_demangle(typeid(myLongLong).name(), nullptr, nullptr, nullptr)   << ": "
         << sizeof(myLongLong);                 // 8

    cout << endl << endl;
}
void myIntegralRanges() {
    cout << "SIGNED INTEGRAL RANGES:" << endl;

    cout << "CHAR \t\tmin: "        << CHAR_MIN         << "; max: " << CHAR_MAX << endl;
    cout << "SHRT \t\tmin: "        << SHRT_MIN         << "; max: " << SHRT_MAX << endl;
    cout << "INT \t\tmin: "         << INT_MIN          << "; max: " << INT_MAX << endl;
    cout << "LONG \t\tmin: "        << LONG_MIN         << "; max: " << LONG_MAX << endl;
    cout << "LONG_LONG \tmin: "   << LONG_LONG_MIN    << "; max: " << LONG_LONG_MAX << endl;
    cout << endl;

    cout << "UNSIGNED INTEGRAL RANGES:" << endl;
    cout << "UCHAR \t\tmin: "       << 0 << "; max: " << UCHAR_MAX << endl;
    cout << "USHRT \t\tmin: "       << 0 << "; max: " << USHRT_MAX << endl;
    cout << "UINT \t\tmin: "        << 0 << "; max: " << UINT_MAX << endl;
    cout << "ULLONG \t\tmin: "      << 0 << "; max: " << ULLONG_MAX << endl;
    cout << "ULONG_LONG \tmin: "  << 0 << "; max: " << ULONG_LONG_MAX << endl;
    cout << endl;
}
void myNumericLiterals() {
    cout << "NUMERIC LITERALS:" << endl;

    int myDec = 50;
    int myOct = 062;            // octal notation (0)
    int myHex = 0x32;           // hexadecimal notation (0x)
    int myBin = 0b0011'0010;    // binary notation (0b)

    cout << "myDec: " << myDec << ", "
         << "myOct: " << myOct << ", "
         << "myHex: " << myHex << ", "
         << "myBin: " << myBin << endl;
    cout << endl;
}
void myFloatingPointTypes() {
    cout << "FLOATING POINT TYPES:" << endl;

    /// The precision shown here refers to the total number of digits in the number.
    float myFloat;    		// ~7 digits
    double myDouble;  		// ~15 digits
    long double myLD; 		// typically same as double

    /// Trying to assign more than seven digits to a float means that the least significant digits will get rounded off
    myFloat = 12345.678; 	// rounded to 12345.68
    cout << "myFloat (12345.678): " << myFloat << endl;

    myFloat = 3e2; 			// 3*10^2 = 300
    cout << "myFloat (3e2 -> 3*10^2 -> 300): " << myFloat << endl;

    myFloat = 0xFp2; 		// 15*2^2 = 60
    cout << "myFloat (0xFp2 -> 15*2^2 -> 60): " << myFloat << endl;

    auto myFloatAuto = 4.4F;
    auto myDoubleAuto = 5.5;
    auto myLongDoubleAuto = 6.6L;

    cout << typeid(myFloatAuto).name()        << ", "
         << typeid(myDoubleAuto).name()       << ", "
         << typeid(myLongDoubleAuto).name();
    cout << endl;

    cout << abi::__cxa_demangle(typeid(myFloatAuto).name(), nullptr, nullptr, nullptr)        << ", "
         << abi::__cxa_demangle(typeid(myDoubleAuto).name(), nullptr, nullptr, nullptr)       << ", "
         << abi::__cxa_demangle(typeid(myLongDoubleAuto).name(), nullptr, nullptr, nullptr);
    cout << endl << endl;
}
void myCharacterTypes() {
    cout << "CHARACTER TYPES:" << endl;

    char myChar = 0;                        // -128 to +127
    signed char mySignedChar = 0;           // -128 to +127
    unsigned char myUnsignedChar  = 0;      // 0 to 255

    cout << typeid(myChar).name()               << ", "
         << typeid(mySignedChar).name()         << ", "
         << typeid(myUnsignedChar).name();
    cout << endl;

    cout << abi::__cxa_demangle(typeid(myChar).name(), nullptr, nullptr, nullptr)               << ", "
         << abi::__cxa_demangle(typeid(mySignedChar).name(), nullptr, nullptr, nullptr)         << ", "
         << abi::__cxa_demangle(typeid(myUnsignedChar).name(), nullptr, nullptr, nullptr);
    cout << endl << endl;

    char c = 'x';       // assigns 120 (ASCII for 'x')
    cout << "c: " << c << ", ";
    cout << "(int)c: " << (int)c << ", ";

    int i = c;          // assigns 120
    cout << "i: " << i << ", ";
    cout << "(char)c: " << (char)i;
    cout << endl << endl;
}
void myBooleanTypes() {
    cout << "BOOLEAN TYPES:" << endl;

    bool b = false;             // false value
    cout << "b: " << b << endl;

    b = true;                   // true value
    cout << "b: " << b << endl;

    b = static_cast<bool>(32);  // true
    cout << "b: " << b << endl;

    cout << typeid(b).name() << ", "
         << abi::__cxa_demangle(typeid(b).name(), nullptr, nullptr, nullptr);
    cout << endl << endl;
}
void myTypeCheck() {
    cout << "TYPE CHECK:" << endl;

    int i = 10;
    long long ll = 50;
    unsigned long long ull = 100;
    double d = 5.5;
    long double ld = 5.5;
    char c = 'x';
    bool b = false;

    if (typeid(i) == typeid(int)) cout << "int type" << endl;
    if (typeid(ll) == typeid(long long)) cout << "long long type" << endl;
    if (typeid(ull) == typeid(unsigned long long)) cout << "unsigned long long type" << endl;
    if (typeid(d) == typeid(double)) cout << "double type" << endl;
    if (typeid(ld) == typeid(long double)) cout << "long double type" << endl;
    if (typeid(c) == typeid(char)) cout << "char type" << endl;
    if (typeid(b) == typeid(bool)) cout << "bool type" << endl;

    if (typeid(i) == typeid(long)) cout << "typeid(i) == typeid(long): false" << endl;
    if (typeid(i) != typeid(long)) cout << "typeid(i) != typeid(long): true" << endl;
    cout << endl << endl;
}
void variableScopes() {
    int x = 44;
    cout << "In variableScopes() method called inside main(): x = " << x << endl;
    cout << "In variableScopes() method called inside main(): ::x = " << ::x << endl;
}