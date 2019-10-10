 #include <bits/stdc++.h>
     
    using namespace std;

    int main()
    {
        int cn{0};
        string t,s;
        getline(cin,t);
        int le=t.size();
        for(int i=0;i<le;i++)
        {
            if(isalpha(t[i]))
            {
                s.push_back(t[i]);
                cn=0;
            }
            else if(t[i]==' '&&cn==0)
            {
                s.push_back(' ');
                cn=1;
            }
            else if (t[i]=='.' || t[i]==',' || t[i]=='?' || t[i]==';' || t[i]==':' || t[i]=='"' || t[i]=='!')
            {
                if(cn==1){s.pop_back();}
                s.push_back(t[i]);
                s.push_back(' ');
                cn=1;
            }

        }
        cout<<s;
    }