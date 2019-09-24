#include <bits/stdc++.h>
 using namespace std;

 int main()
 {
     string s;
     cin>>s;
     int l=s.size()-1,cnt=0;
     for(int i=0;i<=l;i++,l--)
     {
         if(s[i]!=s[l]) cnt++;
     }
     int ll=s.size();
     if(cnt>=2)
     {
         cout<<"NO";
         return 0;
     }
     else if (cnt==1)
     {
         cout<<"YES";
         return 0;
     }
     else
     {
         if(ll%2==0)
         {
             cout<<"NO";
             return 0;
         }
         cout<<"YES";
         return 0;
     }
     
     
 }