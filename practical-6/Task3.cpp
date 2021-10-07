#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string a="SACHIN";
	reverse(a.begin(),a.end());
	cout<<"using reverse function:\n "<<a<<endl;
	
	string b="ASWAL";
	cout<<"Manually reversing:\n";
	for(int i=b.size()-1;i>=0;i--)
	 cout<<b[i];
	cout<<"\n";
return 0;
}
