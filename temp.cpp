#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>>items1,items2;

    items1={{1,1},{4,5},{3,8}};
    items2={{3,1},{1,5}};

    
    
    vector<pair<int,int>>pairr;

    for(int i=0;i<items1.size();i++){
        int summ=items1[i][1];
        int idx=items1[i][0];
        //    cout<<"summ "<<summ<<" "<<idx<<endl;
        pairr.push_back({idx,summ});
    }

   

    

    for(int i=0;i<items2.size();i++){
        int summ=items2[i][1];
        int idx=items2[i][0];
        //    cout<<"summ "<<summ<<" "<<idx<<endl;
        pairr.push_back({idx,summ});
    }

    for(auto i:pairr){
        cout<<i.first<<" "<<i.second<<endl;
    }

    vector<vector<int>>ans;

    for(int i=0;i<pairr.size();i++){
        // vector<int>temp;

        int key=pairr[i].first;
        int summ=pairr[i].second;
        
        for(int j=1;j<pairr.size();j++){
            if(key==pairr[j].first){
                summ=summ+pairr[j].second;
            }
        }
        ans.push_back({key,summ});
    }

    cout<<"ans = "<<endl;

    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

  

   


    return 0;
}