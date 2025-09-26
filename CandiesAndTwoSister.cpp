#include<iostream>
using namespace std;
int solve(){
    int n; cin>>n;
//     int a = n-1, b = 1, count = 0;
//     while((a>b) and ((a+b)==n)){
//         count++;
//         a--;
//         b++;
//     }
//     cout<<count<<endl;
//     return 0;
cout<<(n-1)/2<<endl;
return 0;

}


int main(){
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
}