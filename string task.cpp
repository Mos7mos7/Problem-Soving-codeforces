    #include <iostream>
    #include<string>
    #include<string.h>
    #include<algorithm>
    #include<cstring>
    using namespace std;
    int main()
    {
     string word;
     cin>>word;
     for(int i=0; i < word.length(); i++)
     {
         word.at(i) = tolower(word.at(i));
     }
     
     for(int i=0; i < word.length(); i++)
     {
         if(word.at(i)!='a' &&word.at(i)!='o' &&word.at(i)!='u' &&word.at(i)!='i' &&word.at(i)!='y' &&word.at(i)!='e')
         {
             cout<< "."<<word.at(i);
         }
     }
     
    }