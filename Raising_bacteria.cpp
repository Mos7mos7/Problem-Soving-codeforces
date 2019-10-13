#include <bits/stdc++.h>
     
    using namespace std;
    int main()
     {
         long int x;
         int ans{0};
         scanf("%ld",&x);
         while (x>0)
         {
             if(x%2==1){ans++;}
             x=x/2;
         }
         cout<<ans;
     }