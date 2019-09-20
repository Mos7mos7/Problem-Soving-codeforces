    #include <bits/stdc++.h>
        using namespace std;
     
     
        int main()
        {
            int len{0};
            long long sum{0};
            cin>>len;
            long long arr [len];
            for(int i =0;i<len;i++)
            {
                cin>>arr[i];
            }
            sort(arr,arr+len);
            for(int i=0;i<len;i++)
            {
                sum+=arr[i];
            }
            int i =0;
            while(sum%2!=0)
            {
                if (arr[i]%2!=0) sum-=arr[i];
               i++;
            }
             cout<<sum;
     
     
        }