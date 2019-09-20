    #include <bits/stdc++.h>
        using namespace std;
     
     
        int main()
        {
            int year {0},a{0},b{0},c{0},d{0};
            cin>>year;
            while (true)
            {
                year+=1;
                a=year%10;
                b=(year/10)%10;
                c=(year/100)%10;
                d=(year/1000)%10;
                if(a!=b && a!=c && a!=d && b!=c && b!=d &&c!=d) break;
                //b=year%100;
                //c=year%10;
            }
            cout<<year;
        }