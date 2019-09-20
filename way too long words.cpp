    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int n,m;
        string s;
        cin>>n;
        for (int i=0;i<n;i++)
        {
           cin>>s;
           m = s.length();
           if (m<=10)
                cout<<s<<endl;
           else
            cout<<s[0]<<m-2<<s[m-1]<<endl;
        }
    }