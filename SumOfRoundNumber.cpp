#include<iostream>
#include<vector>
using namespace std;

int solve(){
    vector<int> keep;
    int n; cin>>n;
    int ans = n;
        if(n%10!=0){
        keep.push_back(n%10);
        }
    n = n - (n%10);

    if(n%100!=0){
        keep.push_back(n%100);
        }
    n = n - (n%100);

    if(n%1000!=0){
        keep.push_back(n%1000);
        }
    n = n - (n%1000);

    if(n%10000!=0){
        keep.push_back(n%10000);
        }
    n = n - (n%10000);

    if(ans>=10000 and ans%10000==0){
        keep.push_back(ans);
        }

    cout<<keep.size()<<endl;
    for(int i=0; i<keep.size(); i++){
        cout<<keep[i]<<" ";
    }
    cout<<endl;
    return 0;
}


int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}

