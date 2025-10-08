#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int X,N; cin>>X>>N;
    int long long sum = 0;
    for(int i=1; i<=N; i++){
        if(i%2==0){
            sum+= pow(X,i);
        }
    }
    cout<<sum<<endl;
}