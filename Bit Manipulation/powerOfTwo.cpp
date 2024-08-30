#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOfTwo(num)) {
        cout <<"Yes"< endl;
    } else {
        cout <<"No"<< endl;
    }

    return 0;
}
