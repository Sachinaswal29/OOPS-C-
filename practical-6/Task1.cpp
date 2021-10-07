#include<iostream>
#include<string>
using namespace std;
int main()
{
 int i,j;
 int sum1=0;
 cout<<"Enter the int value i and j"<<endl;
 cin>>i;
 cin>>j;
 sum1=i+j;
 cout<<"Sum is= "<<sum1<<endl;
 
 float sum2=0;
 float a,b;
 cout<<"Enter the float value of a and b"<<endl;
 cin>>a;
 cin>>b;
 sum2=a+b;
 cout<<"Sum is= "<<sum2<<endl;
 
 float g=4.0;
 int h=2;
 cout<<"Enter the float and int value of a and b"<<endl;
 cout<<g+h<<endl;
 
 string s1="Hello";
 cout<<s1<<endl;
 string s2="World";
 cout<<s2<<endl;
 string s3;
 s3=s1+s2;
 cout<<"s1+s2:"<<s3<<endl;
 
 string s4="sachin";
 int s=4;
 cout<<s4+s;
 return 0;
}
