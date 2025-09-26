#include<iostream>
using namespace std;
void letsSolve(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b==c) or (a+c==b) or (b+c==a)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        letsSolve();
    }
}