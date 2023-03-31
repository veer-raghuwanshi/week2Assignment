#include <iostream>
using namespace std;
// Write a program to Input two 3 X 3 Array and perform below operation:-
//1 - Addition
//2 – Multiplication

int main()
{
    int arr1[3][3], arr2[3][3], res[3][3], choice, i, j, k;

    // Reading input from user for the first array
    cout << "Enter elements of the first array:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> arr1[i][j];
        }
    }

    // Reading input from user for the second array
    cout << "Enter elements of the second array:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> arr2[i][j];
        }
    }

    // Reading input from user for choice of operation
    cout << "Enter your choice of operation:" << endl;
    cout << "1 - Addition" << endl;
    cout << "2 - Multiplication" << endl;
    cin >> choice;

    // Performing addition or multiplication based on choice of operation
    switch (choice)
    {
    case 1: // Addition
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                res[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        break;

    case 2: // Multiplication
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                res[i][j] = 0;
                for (k = 0; k < 3; k++)
                {
                    res[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        break;

    default:
        cout << "Invalid choice of operation!" << endl;
        return 0;
    }

    // Printing the result
    cout << "Result of the operation:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
