    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
     int n,s=0,d=0;
     bool turn =true;
     cin>>n;
     int arr[n];
     int start=0,endd=n-1;
     for (int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
    while(start<=endd)
    {
        if (arr[start]>=arr[endd])
        {
          if (turn){s+=arr[start];}
          else {d+=arr[start];}
          start++;
        }
        else if (arr[endd]>arr[start])
        {
            if (turn){s+=arr[endd];}
            else {d+=arr[endd];}
            endd--;
        }
        if (turn)
            turn=false;
        else
            turn=true;
    }
    cout<<s<<" "<<d;
    }