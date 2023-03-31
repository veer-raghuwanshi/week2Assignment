#include <iostream>
using namespace std;
//13. Write a program to sort array in descending order?

int main()
{
    int arr[100], n, i, j, temp;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:" << endl;

    // Reading input from user
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    // Sorting array in descending order using bubble sort algorithm
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Printing the sorted array
    cout << "Sorted array in descending order: " << endl;
    for(i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
