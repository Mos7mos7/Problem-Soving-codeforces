#include <bits/stdc++.h>
     
    using namespace std;

    int main()
    {
        long long int a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        if(c==0)
        {
            if(b==a){cout<<"YES";return 0;}
            else {cout<<"NO";return 0;}
        }

        if(b>a&&c<0 || a>b&&c>0) {cout<<"NO";return 0;}

        else
        {
            if((b-a)%c==0){cout<<"YES";return 0;}
            else {cout<<"NO";return 0;}
            
        }
    }
        