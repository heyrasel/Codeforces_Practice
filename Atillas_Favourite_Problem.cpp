#include<iostream>
#include<algorithm>
using namespace std;
void solve(){
    int n; cin>>n;
    string str;
    cin>>str;
    char ch = 'a';
    for(auto current : str){
        ch = max(ch,current);
    }
    cout<<(ch-'a')+1<<endl;

}
int main(){
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    
}