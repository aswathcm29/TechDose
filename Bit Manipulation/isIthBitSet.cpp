#include <iostream>
using namespace std;

bool isIthBitSet(int n, int i) {
    return (n & (1 << (i-1))) != 0;
}

int main() {
    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to check: ";
    cin >> i;

    if (isIthBitSet(num, i)) {
        cout <<"Yes"<< endl;
    } else {
        cout <<"No"<< endl;
    }

    return 0;
}