    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
     int n,gr=0;
     cin>>n;
     string s[n];
     for (int i=0;i<n;i++)
     {
         cin>>s[i];
     }
     for(int j=0;j<n;j++)
     {
         if (s[j]!=s[j+1]) gr++;
     }
     cout<<gr;
    }