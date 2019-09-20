    #include <bits/stdc++.h>
        using namespace std;
    // //
     int main ()
     {
        int n,vo,sum;
        int cnt =0;
        cin>>n;
        for (int i =0;i<n;i++)
        {
            sum =0;
           for (int l =0;l<3;l++)
           {
               cin>>vo;
               sum =sum+vo;
     
           }
                      if (sum>=2)
                cnt++;
        }
        cout<<cnt;
     }