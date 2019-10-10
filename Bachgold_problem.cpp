#include <bits/stdc++.h>
     
    using namespace std;

    int main()
    {
       int n;
       scanf("%d",&n);
       if(n%2==0)
       {
           int l=n/2;
           cout<<l<<endl;
           for(int i=1;i<=l;i++)
           {
               cout<<"2 ";
           }
           return 0;
       }
       else 
       {
           int l=n/2;
           cout<<l<<endl;
           for(int i=1;i<l;i++)
           {
               cout<<"2 ";
           }
           cout<<"3";
           return 0;
       }
    }