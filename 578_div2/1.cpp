#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    vector<int> room(10, 0);

    string str;
    cin >> str;

    for(int i=0;i<q;i++){
        char c=str[i];

        if(c=='L'){
            for(int i=0;i<10;i++){
                if(room[i]==0){
                    room[i]=1;
                    break;
                }
            }
        }
        else if(c=='R'){
            for(int i=9;i>=0;i--){
                if(room[i]==0){
                    room[i]=1;
                    break;
                }
            }
        }
        else {

            int l=(str[i]);
            // cout<<"l  is "<<l<<endl;

            l=l-48;
            room[l]=0;

            



        }
    }

    for(auto i:room){
        cout<<i;
    }
   




    return 0;
}