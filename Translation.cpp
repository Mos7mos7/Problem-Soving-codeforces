    #include <bits/stdc++.h>
         
        using namespace std;
         
        int main()
        {
        string s ,t;
        cin>>s>>t;
        if(s.size()!=t.size())
        {
            cout<<"NO";
            return 0;
        }
        int len =s.size();
        for(int i=0;i<len;i++)
        {
            s[i]=tolower(s[i]);
            t[i]=tolower(t[i]);
        }
        int temp =len-1;
        for (int i=0;i<len;i++,temp--)
        {
            if(s[i]!=t[temp])
            {
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
        }