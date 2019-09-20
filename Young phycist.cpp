    #include <bits/stdc++.h>
         
        using namespace std;
         
        int main()
        {
        int n {0},x{0},y{0},z{0};
        int sx{0},sy{0},sz{0};
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y>>z;
            sx+=x;
            sy+=y;
            sz+=z;
        }
        (sx==0&&sy==0&&sz==0)?cout<<"YES":cout<<"NO";
        }