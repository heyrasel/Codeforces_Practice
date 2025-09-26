#include<iostream>
using namespace std;
void solve(){
    long long n; cin>>n;
    int digit;
    if(n==0){
        cout<<0<<endl;
        return;
    }
    while(n>0){
        digit = n%10;
        cout<<digit<<" ";
        n = n/10;
    }
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}