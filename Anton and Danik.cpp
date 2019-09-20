    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
     int n,aa=0,dd=0;
     string gam;
     cin>>n>>gam;
     for (int i=0;i<n;i++)
     {
         if (gam[i]=='A') aa++;
         else
            dd++;
     }
     if (aa>dd) cout<<"Anton";
     else if (dd>aa) cout<<"Danik";
     else
        cout<<"Friendship";
    }