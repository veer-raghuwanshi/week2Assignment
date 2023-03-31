// 6. Write a program to print prime numbers from 1 to 1000
#include <iostream>
using namespace std;

int main()
{
    int num, flag;
    cout << "Prime Numbers between 1 and 1000 are:\n";

    cout << "enter any number = ";
    cin >> num;

    for (int i = 2; i <= num; i++)
    {
        flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && num != 1)
        {
            cout << i << " ,";
        }
    }

    return 0;
}