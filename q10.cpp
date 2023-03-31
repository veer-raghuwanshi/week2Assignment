#include <iostream>
using namespace std;
// 10Write a program to calculate factorial using function with return type
//and argument ?
 int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {

        return n * factorial(n - 1);
    }
}
int main()
{
    int n;

    cout << "enter any number =";
    cin >> n;
    int res = factorial(n);
    cout << n << "! = " << res << endl;
    return 0;
}