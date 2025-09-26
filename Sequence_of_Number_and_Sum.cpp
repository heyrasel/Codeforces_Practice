#include<iostream>
using namespace std;
int main(){
    while(1){
        int N,M;
        cin>>N>>M;
        int sum = 0;
        if(N<=0 or M<=0){
            break;
        }
        else{
            for(int i=min(N,M); i<=max(N,M); i++){
                cout<<i<<" ";
                sum+=i;
            }
            cout<<"sum ="<<sum<<endl;
        }
    }
}