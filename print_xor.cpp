#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = 0;

    for (int i = 1; i <= n; i++) {
        result ^= i;
    }

    cout << "XOR of all numbers is: " << result;

    return 0;
}
