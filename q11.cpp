#include <iostream>
using namespace std;
//11 Write a program to check the prime number using function with argument
and return type?
int isPrime(int n)
{
    int i;

    if(n <= 1)
    {
        return 0;
    }

    for(i=2; i<=n/2; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int num, flag;
    cout << "Enter a number to check if it is prime: ";
    cin >> num;

    flag = isPrime(num);

    if(flag == 1)
    {
        cout << num << " is a prime number" << endl;
    }
    else
    {
        cout << num << " is not a prime number" << endl;
    }

    return 0;
}
