#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1; 
        n >>= 1;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = countSetBits(num);
    cout << "Number of set bits: " << result << endl;

    return 0;
}
