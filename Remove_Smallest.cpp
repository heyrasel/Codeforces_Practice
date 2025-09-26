#include<iostream>
#include<algorithm>
using namespace std;
void solve(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int flag = 0;
    if(n>1){
    for(int i=0; i<n-1; i++){
        if(arr[i+1]-arr[i]>1){
            cout<<"NO"<<endl;
            return;
        }
        else flag++;
    }
    if(flag) cout<<"YES"<<endl;
    }
    else cout<<"YES"<< endl; 
    return;

}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}