#include <iostream>
using namespace std;

int toggleIthBit(int n, int i) {
    return n ^ (1 << i-1);
}

int main() {
    int n, i;
    
    cout << "Enter an integer: ";
    cin >> n;
    
    cout << "Enter the bit position to toggle:";
    cin >> i;
    
    int result = toggleIthBit(n, i);
    
    cout << "Original number: " << n << endl;
    cout << "After toggling the " << i << "-th bit: " << result << endl;
    
    return 0;
}
