    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
    int cal=0;
    int arr[4];
    for (int i=0;i<4;i++) {cin>>arr[i];}
    string tu; cin>>tu;
    for(int i=0;i<tu.length();i++)
    {
       if (tu[i]=='1') {cal+=arr[0];}
       else if(tu[i]=='2') {cal+=arr[1];}
       else if (tu[i]=='3') {cal+=arr[2];}
       else if (tu[i]=='4') {cal+=arr[3];}
    }
    cout<<cal;
    }