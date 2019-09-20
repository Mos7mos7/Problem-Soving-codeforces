    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
    int n,ev,sum=0,unt=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>ev;
        if (sum+ev<0) unt++;
        else
           sum=sum+ev;
    }
    cout<<unt;
    }