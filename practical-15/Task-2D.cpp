// Creating and Writing in a file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream MyFile("file.txt");
  MyFile << "This  is Task-D in a file";
  MyFile.close();
}

//Count Number of Character in a file
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
   char filename[30], ch;
   int tot=0;
   ifstream fp;
   cout<<"Enter the Name of File: ";
   cin>>filename;
   fp.open(filename, ifstream::in);
   if(!fp)
   {
      cout<<endl<<"File doesn't exist or Access denied!";
      return 0;
   }
   while(fp>>noskipws>>ch)
      tot++;
   fp.close();
   cout<<endl<<"Total Characters = "<<tot;
   cout<<endl;
   return 0;
}

// Count Number of words in a file
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
   char filename[30], ch, str[1000];
   int tot=0, i=0, tot_word=0;
   ifstream fp;
   cout<<"Enter the Name of File: ";
   cin>>filename;
   fp.open(filename, ifstream::in);
   if(!fp)
   {
      cout<<endl<<"File doesn't exist or Access denied!";
      return 0;
   }
   while(fp>>noskipws>>ch)
   {
      str[tot] = ch;
      tot++;
   }
   fp.close();
   str[tot]='\0';
   while(str[i]!='\0')
   {
      if(str[i]=='\n')
      {
         if(str[i+1]!='\0' && str[i+1]!=' ')
            tot_word++;
         i++;
      }
      else if(str[i]!=' ')
         i++;
      else
      {
         if(str[i+1]!='\0' && str[i+1]!=' ')
            tot_word++;
         i++;
      }
   }
   cout<<endl<<"Total Words = "<<tot_word;
   cout<<endl;
   return 0;
}

// Count number of lines in a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   char filename[30], ch, str[1000];
   int tot=0, i=0, tot_lines=0;
   ifstream fp;
   cout<<"Enter the Name of File: ";
   cin>>filename;
   fp.open(filename, ifstream::in);
   if(!fp)
   {
      cout<<endl<<"File doesn't exist or Access denied!";
      return 0;
   }
   while(fp>>noskipws>>ch)
   {
      str[tot] = ch;
      tot++;
   }
   fp.close();
   str[tot]='\0';
   while(str[i]!='\0')
   {
      if(str[i]=='\n')
         tot_lines++;
      i++;
   }
   tot_lines++;
   cout<<endl<<"Total Number of Lines = "<<tot_lines;
   cout<<endl;
   return 0;
}

