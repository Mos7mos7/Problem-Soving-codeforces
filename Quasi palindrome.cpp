#include <bits/stdc++.h>
 using namespace std;

 int main()
 {
     string s;
     cin>>s;
     while(s[0]=='0')
     {
         s.erase(0,1);
     }
    while (s[s.size()-1]=='0')
    {
        s.erase(s.size()-1,1);
    }
    int l=s.size()-1;
    for(int i=0;i<l;i++,l--)
    {
        if(s[i]!=s[l])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
 }