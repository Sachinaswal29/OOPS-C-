#include<iostream>
using namespace std;
int main()
{
 int c;
 cout<<"enter 1 for year, 2 for month, 3 for day: ";
 cin>>c;
 switch(c)
 {
   case 1:
   cout<<"Year: 2021"<<endl;
   break;
   case 2:
   cout<<"Month: october"<<endl;
   break;
   case 3:
   cout<<"Day: 13"<<endl;
   break;
   default:
   cout<<"wrong choice."<<endl;
   break;
 }
 return 0;
}
