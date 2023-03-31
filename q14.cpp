#include <iostream>
using namespace std;
//14. Write a program to find maximum element in array
int main()
{
    int arr[100], n, i, maxElement;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:" << endl;

    // Reading input from user
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    // Initializing maxElement with the first element of the array
    maxElement = arr[0];

    // Finding the maximum element in the array
    for(i=1; i<n; i++)
    {
        if(arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    // Printing the maximum element
    cout << "Maximum element in the array is: " << maxElement << endl;

    return 0;
}
