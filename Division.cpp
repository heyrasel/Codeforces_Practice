#include<iostream>
using namespace std;
void solve(){
    int n; cin>>n;
    if(n>= 1900){
        cout<<"Division 1"<<endl;
    }
    else if(n>=1600 and n<=1899){
        cout<<"Division 2"<<endl;
    }
    else if(n>= 1400 and n<=1599){
        cout<<"Division 3"<<endl;
    }
    else{
        cout<<"Division 4"<<endl;
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}