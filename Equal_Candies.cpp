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
    int letsEat = 0;
    if(n>1){
     for(int i=1; i<n; i++){
        letsEat+= (arr[i] - arr[0]);
        }
    }
    if(n==1){
        cout<<0<<endl;
    }
    else cout<<letsEat<<endl;


}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}