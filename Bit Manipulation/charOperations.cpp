#include <iostream>
using namespace std;

char toLowerCase(char c) {
    if (c >= 'A' && c <= 'Z')
        return c | (1 << 5);
    return c;
}

char toUpperCase(char c) {
    if (c >= 'a' && c <= 'z')
        return c & ~(1 << 5);
    return c;
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    char lower = toLowerCase(ch);
    char upper = toUpperCase(ch);

    cout << "Lowercase version: " << lower << endl;
    cout << "Uppercase version: " << upper << endl;

    return 0;
}
