#include<iostream>
#include<string.h>
using namespace std;
int main(){
    // char ch[100];

    // cout<<"Enter the number:";
    // cin>>ch;

    // cout<<"Reverse is:"<<endl<<strrev(ch); 

    int rem,rev=0,n;
    cout<<"Enter a number:"<<endl;
    cin>>n;

    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;

    }

    cout<<"The reversed number is:"<<rev;
    


    
  

    return 0;
}