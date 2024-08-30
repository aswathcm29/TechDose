#include <iostream>
using namespace std;

int unsetIthBit(int n, int i) {
    return n & ~(1 << (i-1));
}

int main() {
    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to unset: ";
    cin >> i;

    int result = unsetIthBit(num, i);
    cout << result << endl;

    return 0;
}

