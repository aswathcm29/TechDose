#include <iostream>
using namespace std;

int setIthBit(int n, int i) {
    return n | (1 << i);
}

int main() {
    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to set: ";
    cin >> i;

    int result = setIthBit(num, i-1);
    cout << result << endl;

    return 0;
}
