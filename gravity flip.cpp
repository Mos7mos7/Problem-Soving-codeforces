    #include <iostream>
    #include<string>
    #include<string.h>
    #include<cstring>
    #include<math.h>
    #include<cmath>
    #include<stdio.h>
    #include<stdlib.h>
    #include <bits/stdc++.h>
    #include <algorithm>
     
    using namespace std;
     
    int main()
    {
        int n;
        cin>>n;
        int columns[n];
        for(int i=0; i<n; i++)
        {
            cin>>columns[i];
        }
        sort(columns, columns+n);
        for(int i=0; i<n; i++)
        {
            cout<<columns[i]<<" ";
        }
    }