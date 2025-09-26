#include<iostream>
#include<algorithm>
using namespace std;
int solve(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int flag = 1;
    for(int i=0; i<n-2; i++){
        if(arr[i]==arr[i+1] and arr[i+1]==arr[i+2]){
            cout<<arr[i]<<endl;
            flag = 0;
            return 0;
        }
    }
    if(flag) cout<<"-1"<<endl;
    return 0;
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}