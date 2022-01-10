// Append in a file
#include<fstream>
using namespace std;

int main()
{
    fstream fout;  
    fout.open ("file.txt",ios::app); 
    if(fout.is_open())
        fout<< "\n task3 to append a file\n"; 
    fout.close(); 
    return 0;
}

