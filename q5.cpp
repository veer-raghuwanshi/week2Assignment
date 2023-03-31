#include<iostream>
using namespace std;
  //Write a program to calculate sum of series (1/1+1/2+1/3+1/4+.....).
int main()
{
    float n , sum = 0;
    cout<<"Enter any number "<<endl;
    cin>>n;
   for(int i = 1;i<=n;i++){
    cout<< 1 <<"/"<< i <<" +  ";
   }
   cout<<endl;
for(int i = 1;i<=n;i++){
    sum += 1.0/i;
}
   cout<<"the sum of series is = "<<sum;
   return 0;
}