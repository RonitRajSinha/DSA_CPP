
#include <iostream>
using namespace std;

void subarrays(int *arr, int n) {
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            cout << "[";

            for (int i = start; i <= end; i++) {
                cout << arr[i];

                if (i < end) {
                    cout << ", ";
                }
            }

            cout << "] ";
        }
        cout << "\n";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    subarrays(arr, n);

    return 0;
}
