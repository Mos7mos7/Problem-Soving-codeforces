    #include <bits/stdc++.h>
         
        using namespace std;
         
        int main()
        {
        string s;
        cin>>s;
        while(s.find("WUB")!=-1)
        {
            int pos=s.find("WUB");
            if(pos==0) s.erase(0,3);
            else
            {
                s.replace(pos,3," ");
            }
        }
        cout<<s;
        }