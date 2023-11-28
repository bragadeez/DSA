#include <iostream>
using namespace std;

int main() {
    int n = 9;
    int arr[] = {2, 1, 2, 5, 6, 5, 7, 7, 6};

    int result = 0;

    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }

    cout << "The number that occurs only once is: " << result;

    return 0;
}
