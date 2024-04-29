#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a Character: ";
    cin>>c;

    if(c>=65 && c<=90 ||c>=97 && c<=112){
        cout<<c<<" is Alphabet.";
    }

    else{

        cout<<c<<" is not Alphabet.";
    }
    return 0;
    
}