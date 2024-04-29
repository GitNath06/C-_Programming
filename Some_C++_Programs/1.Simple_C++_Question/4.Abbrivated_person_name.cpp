#include<iostream>
using namespace std;
int main(){

   string fname,mname,lname;
    cout<<"Enter your Full name "<<endl;
    cin>>fname>>mname>>lname;

   cout<<"The Abbreviated Form of your  name is: "<<(char)fname[0]<<"."<<(char)mname[0]<<"."<<lname;
    

    return 0;
}