#include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
    string s ,h{"hello"};
    cin>>s;
    int cnt{0},si=s.size();
    for(int i=0,j=0;i<si;i++)
    {
        if(s[i]==h[j])
        {
            j++;
            cnt++;
        }
    }
    (cnt==5)?cout<<"YES":cout<<"NO";
    }