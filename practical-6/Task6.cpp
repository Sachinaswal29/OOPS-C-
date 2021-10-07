#include<iostream>
#include<string>
using namespace std;
int main()
{
 string str="hello";
 cout<<str<<endl;
 cout<<&str<<endl;
 str[0]='j';
 cout<<str<<endl;
 cout<<&str<<endl;
 return 0;
}
