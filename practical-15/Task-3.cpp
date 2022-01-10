// I/O manipulators.
#include<iostream>
#include<sstream>
using namespace std;
/*
. IOS: hex,dec,skipws,noskipws
*/
void v1(){
    int n=70;
    cout<< dec << n << '\n'; // To print decimal value
    cout<< hex << n << '\n'; // To print hexadecimal value
    
    char a,b,c;
    std::istringstream s ("  123");
    s >> std::skipws >> a >> b >> c; // It will skip/remove the whitespaces.
    cout<< a << b << c << '\n';
    
    std::istringstream p ("  123"); // It will not skip/remove the whitespaces(2) and also count them.
    p >> std::noskipws >> a >> b >> c;
    cout<< a << b << c <<'\n';
    cout<<endl;
}

/*
Istream: ws
*/
void v2(){
    std::istringstream s("     this is a test");// 5 whitespaces 
    string line;
    getline(s >> ws, line);
    cout << line;
    cout<<endl;
}

/*
Ostream: endl, ends, flush
*/
void v3(){
    cout<<"First Line, ";
    cout<<"This output is printed on screen"<<endl;
    cout<<"This output is printed on screen"<<ends;
    cout<<"This output is printed on screen"<<flush; // It will remove the buffer.(program<-->temporary buffer<-->permanent storage)
    cout<<endl;
    
}

/*
 Iomanip: setW, setPrecision
*/
#include<iomanip>
void v4(){
    double f=3.14159;
    cout<<setprecision(5)<<f<<'\n'; // Rounding up the last value
    cout<<setw(8)<< 21 << endl;
    cout<<endl;
}

int main()
{
    v1();
    v2();
    v3();
    v4();
    return 0;
}

