#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    int arr[n];

    vector<pair<int,int>>vec;
    

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // ex arr[i] = 9   x = 3
    // v range {6,12}
    for(int i=0;i<n;i++){
        int start=arr[i]-x;
        int end=arr[i]+x;
        vec.push_back({start,end});
    }

    pair<int,int>curr_range=vec[0];

    int ans=0;
    
    for(int i=1;i<n;i++){
        auto curr=vec[i];

        // overlap formula don't mug up
        // take ex :  {21 , 29} & { 25 , 34}  => common= { 25,29 }  => {max,min}

        pair<int,int>overlap={max(curr_range.first,curr.first),min(curr_range.second,curr.second)};

        //ex {5,9} & {12,15}  =>common ={12,9}  l>r then NOT COMMON RANGE
        //make new range as new range of v values at that arr[i]
        if(overlap.first<=overlap.second){
            // coomon aggrement posible in range
            curr_range=overlap;
        }
        else{
            // no common range exists
            // so make new rage as current range of V
            curr_range=curr;
            ans++;
        }
    }

    cout<<ans<<endl;

}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }



    return 0;
}