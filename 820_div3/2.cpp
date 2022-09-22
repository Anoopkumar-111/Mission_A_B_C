#include <bits/stdc++.h>
using namespace std;



int main(){

    int t;
    cin>>t;
    while(t--){

        string ans="";

        int n;
        cin>>n;

        string str;
        cin>>str;

        for(int i=n-1;i>=0;i--){
            int curr=str[i]+48;
            // cout<<"curr for "<<str[i]<<" => "<<curr<<endl;
            if(curr!=96){
                ans+=(char)curr;
                // cout<<(char)curr;
            }
            else{
                string ss="";
                ss=ss+str[i-2];
                ss=ss+str[i-1];

                // cout<<endl;
                // cout<<"ss = "<<ss<<endl;
            
                
                int tt=stoi(ss);
                tt+=96;
                // cout<<tt<<endl;
                // cout<<(char)tt;
                ans+=(char)tt;
                i=i-2;
            }
        }
        reverse(ans.begin(),ans.end());

        cout<<ans<<endl;
    
    }

    return 0;
}