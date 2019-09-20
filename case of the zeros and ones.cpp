    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
     int n,on=0,ze=0;
     string s;
     cin>>n>>s;
     for (int i =0;i<n;i++)
     {
         if (s[i]=='0') ze++;
         else
            on++;
     }
     if (ze>=on) cout<<ze-on;
     else if (on>=ze) cout<<on-ze;
    }