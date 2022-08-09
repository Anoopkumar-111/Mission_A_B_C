#include <bits/stdc++.h>
using namespace std;

const int n= 1e5+10;
int arr[n];
void precompute()
{

  
    arr[0]=1;
    arr[1]=0;
    long long k = 2;
    long long sq = 2;
    for (long long i = 2; i < n; i++)
    {
        // cout<<" k is "<<k<<" i is "<<i<<" k+i "<<k+i<<" sq*sq ="<<sq*sq<<endl;
        if ((k + i) ==sq*sq)
        {
            // cout<<" k is "<<k<<" i is "<<i<<" k+i "<<k+i<<" sq*sq ="<<sq*sq<<endl;
            arr[i] = k;
            k++;
        }
        else if ((k + i) > sq*sq)
        {   
            // cout<<"GREATER case "<<endl;
            sq++;
            // cout<<" k is "<<k<<" i is "<<i<<" k+i "<<k+i<<" sq*sq ="<<sq*sq<<endl;
            while ((k + i) != sq*sq)
            {
                // cout<<" here 3"<<endl;
                k++;
                // cout<<" k ++ "<<k<<endl;
            }
            arr[i] = k;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    precompute();
    while (t--)
    {
        int k;
        cin>>k;
        for(int i=0;i<k;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}