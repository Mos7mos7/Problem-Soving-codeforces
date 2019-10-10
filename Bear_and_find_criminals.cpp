#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,pos,cnt{0};
    scanf("%d%d",&n,&pos);
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i+1]);
    }
    if(arr[pos])cnt++;
int left=0,right=0,l=1;
    while (1)
    {
        right=pos+l;
        left=pos-l;
        if(left<1&&right>n)
        {
            cout<<cnt;
            return 0;
        }
        if(left<1&&arr[right])cnt++;

        else if(right>n&&arr[left])cnt++;

        else if(arr[left]&&arr[right])cnt+=2;
        l++;
    }
    

}