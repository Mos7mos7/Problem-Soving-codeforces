    #include <bits/stdc++.h>
        using namespace std;
    //
     
        int main()
        {
          int n {0};
          cin>>n;
          string s {""};
          for (int i=1;i<=n;i++)
          {
              if (i%2!=0)
                s+=" I hate ";
              else
                s+=" I love ";
              if (i==n)
                s+="it";
              else
                s+="that";
          }
          cout<<s;
        }