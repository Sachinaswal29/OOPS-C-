/*
#include<iostream>
 #include<fstream>
 using namespace std;
 int main()
 {
     ofstream myfile;
     myfile.open("example.txt");
     myfile<<"write this to a file!\n";
     myfile.close();
     return 0;
 }

*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream myfile;
    myfile.open("example.txt");
    string data;
    getline(myfile,data);
    cout<<data;
    myfile.close();
    return 0;
}

