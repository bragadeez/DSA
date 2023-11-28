#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;

    int result = 0;

    for (int i = a; i <= b; i++) {
        result ^= i;
    }

    cout << "XOR of numbers in the range " << result;

    return 0;
}