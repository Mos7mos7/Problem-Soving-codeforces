    #include <bits/stdc++.h>
        using namespace std;
     
     
        int main()
        {
            int arr[10][10];
            int height {0},width {0};
            for(int i=1;i<=5;i++)
            {
                for (int j=1;j<=5;j++)
                {
                    cin>>arr[i][j];
                    if(arr[i][j]==1)
                    {
                        height = i;
                        width = j;
                    }
     
                }
            }
            cout<<abs(height - 3)+ abs(width - 3);
        }