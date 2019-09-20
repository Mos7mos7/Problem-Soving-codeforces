    #include <bits/stdc++.h>
        using namespace std;
     
     int main ()
     {
       int n,cnt=0;
       string s;
       cin>>n;
       for (int i =0;i<n;i++)
       {
          cin>>s;
          if (s=="++X" || s=="X++")
            cnt++;
          else
            cnt--;
       }
       cout<<cnt;
     }