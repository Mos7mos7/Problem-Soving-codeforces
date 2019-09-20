    #include <bits/stdc++.h>
        using namespace std;
     
     
        int main()
        {
            long int n{0},target{0},cnt{0};
            cin>>n>>target;
            for(int i =1;i<=n;i++)
            {
                if(target%i==0 && target/i<=n) cnt++;
            }
            cout<<cnt;
     
        }