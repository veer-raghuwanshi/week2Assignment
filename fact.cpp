#include <iostream>
using namespace std;
// Write a program to calculate Factorial of any number.
int main()
{
    int num, fact = 1;
    cout << "Enter any Number ";
    cin >> num;
    if (num < 0)
    {
        cout << "error " << endl;
    }
    else
    {

        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        cout << "Factorial of " <<num<<"= "<<fact;
    }
}