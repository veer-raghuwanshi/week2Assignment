//. 7. Write a program to calculate sum of first 10 even numbers. 0,2,4,6,8
#include <iostream>
using namespace std;
int evensum(int n)
{
  return n * (n + 1);
}
int main()
{
  int n = 20;
  cout << "Sum of first " << n<<endl<< " Even Number is " << evensum(n);
  return 0;
}