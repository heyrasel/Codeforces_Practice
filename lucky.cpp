#include<iostream>
#include<algorithm>
using namespace std;
void solve(){
    int n; cin>>n;
    int sum1=0, sum2=0;
    for(int i=0; i<3; i++){
        sum1+= n%10;
        n = n/10;
    }
    for(int i=0; i<3; i++){
        sum2+= n%10;
        n = n/10;
    }
    if(sum1==sum2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}