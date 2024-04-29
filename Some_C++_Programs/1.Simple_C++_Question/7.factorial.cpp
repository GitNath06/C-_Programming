#include <iostream>
using namespace std;
int main(){
    int n,i,fact=1;

    cout<<"Enter any number:";
    cin>>n;

    for (int i=n;i>=1;i--){
        cout<<i<<endl;
        fact*=i;
   
    }
     
     cout<<"The factorial of the number is "<<fact;

    return 0;
}