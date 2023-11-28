#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num & 1) {
        cout << num << " is an odd number.";
    } else {
        cout << num << " is an even number.";
    }

    return 0;
}
