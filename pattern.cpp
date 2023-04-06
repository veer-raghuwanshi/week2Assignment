
#include<iostream>
using namespace std;
// *
//***
// ******
int main(){
        int i;
        for(i= 1;i<=5;i++){
                for(int j = 1;j<=i;j++){
                        if(i%2!=0){
                            cout<<" * "; 
                        }
                      
                }
        cout<<endl;        
        }

}
    /// 5
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {

            cout << " " << j;
        }
        cout << endl;
    }
	int sum=1,i;
	for(int k=0;k<=16;k++){
			sum=sum+k;
	for(i=1;i<=16;i++){
		for(int j=1;j<=16;j++){
			
		if(i==sum){
			if(j>=1 && j<=i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
     }
		
	}
	cout<<endl;
	}
//  for (int i = 15; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {

//             cout << " * ";
//         }
//         cout << endl;
//     }
    

for(int i = 1; i<=5;i++){
                for(int j = 5-1;j>=i;j--){
                        
                cout<<" ";
                }
                for(int k = 1;k<=i;k++){
                        cout<<"* ";
                }
                cout<<endl;
        }


    return 0;
}
