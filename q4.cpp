#include<iostream>
using namespace std;
  //Write a program to calculate sum of digits of a number.
int main()
{ int num,digit, sum = 0; 
 cout<<"enter  any number = ";
 cin>>num;
 while(num>0){
    digit= num%10;
    sum+=digit;
    num/=10;
 }
 
 cout<<sum;
return 0;
}