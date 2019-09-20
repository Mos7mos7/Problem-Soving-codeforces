    #include <bits/stdc++.h>
        using namespace std;
     
        	int main()
        {
         string s;
         int n;
         cin>>n;
         string alpha ="qwertyuiopasdfghjklzxcvbnm";
         cin>>s;
     
           if (n<26){
              	cout<<"NO"<<endl;
              	return 0;
              }
     
     
         for (int i=0; i<s.length() ;i++) s[i] =tolower(s[i]);
     
         for(int j=0 ; j<alpha.length() ; j++)
         {
     
              if (s.find(alpha[j])== -1)
        	{
             cout<<"NO"<<endl;
             return 0;
        	}
         }
            cout<<"YES"<<endl;
        }