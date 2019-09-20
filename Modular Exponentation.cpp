    #include <iostream>
    #include <cmath>
    using namespace std;
     
    int main()
    {
       long long  n,m,a=0,mm=0;
       cin>>n>>m;
       mm=(pow(2,n));
        a = m%mm;
       cout<<a;
    }