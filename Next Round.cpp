    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int n,k,cnt=0;
        cin>>n>>k;
        int sc[n+1];
        for (int i =0;i<n;i++)
        {
            cin>>sc[i];
        }
        for (int l =0;l<n;l++)
        {
           if (sc[l]>=sc[k-1]&&sc[l]!=0)
           {
               cnt++;
           }
        }
        cout<<cnt;
    }