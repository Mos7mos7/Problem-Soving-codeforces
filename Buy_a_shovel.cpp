    #include <bits/stdc++.h>
        using namespace std;
     
     
        int main()
        {
            int price{0},coin{0},cnt{1};
            cin>>price>>coin;
            while(true)
            {
                if((cnt*price)%10==0 || (cnt*price)%10==coin)
                {
                    cout<<cnt;
                    return 0;
                }
                cnt++;
     
            }
            cout<<cnt;
        }