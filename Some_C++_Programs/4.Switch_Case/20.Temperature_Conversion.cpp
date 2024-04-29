#include<iostream>
using namespace std;

int main(){
 
 int ch;
 float temp;
 cout<<"1.Celcius_To_Farenheit"<<endl<<"2.Farenheit_To_Celcius"<<endl;
 cin>>ch;

 switch (ch)
 {
 case 1:
 {
    cout<<"Enter the temperature in Celcius.";
    cin>>temp;
    cout<<"Temperature in Farenheit = "<<(temp*9/5)+32;
    break;
 }
 case 2:
 {  

    cout<<"Enter the temperature in Farenheit.";
    cin>>temp;
    cout<<"Temperature in Farenheit = "<<((temp-32)/9)*5;
    break;
 }
    
 
 default:
 cout<<"!!!Sorry!!!"<<endl<<"Invalid Input.";
    break;
 }
return 0;
}