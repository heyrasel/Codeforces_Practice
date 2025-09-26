#include <iostream>
using namespace std;
void solve(){
  int a; cin>>a;
  int sum = 0;
  while(a>0){
    sum+= a%10;
    a = a/10;
  }
  cout<<sum<<endl;
}
int main() 
{
 int t; cin>>t;
 while(t--){
   solve();
 }
}
