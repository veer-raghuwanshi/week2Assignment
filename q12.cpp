#include <iostream>

using namespace std;
//12 Write a program to reverse elements in array? (last element go to first
position and vice-versa)

void reverseArray(int arr[], int n) {
    // Reverse the array by swapping elements
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    reverseArray(arr, n);

    cout << "\nReversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
