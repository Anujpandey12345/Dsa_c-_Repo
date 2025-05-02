#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivot = -1;  // example condition to trigger reversal

    int temp = 0;
    if (pivot == -1) {
        for (int i = 0; i < n / 2; ++i) {
            // Swap elements
            temp = arr[i];
            arr[i] = arr[n - i - 1];
            arr[n - i - 1] = temp;

            // Print swapped elements
            cout << "Swapped arr[" << i << "] = " << arr[i]
                 << " and arr[" << (n - i - 1) << "] = " << arr[n - i - 1] << endl;
        }
    }

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
