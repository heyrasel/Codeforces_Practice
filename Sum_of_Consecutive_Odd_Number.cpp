#include<iostream>
using namespace std;
void solve(){
    int a,b; cin>>a>>b;
    int sum = 0;
    for(int i=min(a,b)+1; i<max(a,b); i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    cout<<sum<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}