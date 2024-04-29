#include<iostream>
using namespace std;
int main(){
int s1,s2,s3;
cout<<"Enter the Three Sides of Triangle: ";
cin>>s1>>s2>>s3;

if((s1+s2)>s3 && (s2+s3)>s1 && (s1+s3)>s2 ){
    cout<<"The Triangle is Valid."<<endl;
}
else{

    cout<<"The Triangle is not Valid."<<endl;
}
return 0;

}