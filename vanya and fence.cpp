    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
     int n,h,fr,cnt=0;
     cin>>n>>h;
     for(int i=0;i<n;i++)
     {
        cin>>fr;
        if (fr>h) cnt+=2;
        else if (fr<=h) cnt++;
     }
     cout<<cnt;
    }