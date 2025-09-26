#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k,count=0; cin>>n>>k;
    vector<int>vector;
    for(int i=1; i<=n; i++){
        vector.push_back(5*i);
    }
    for(int i=0; i<vector.size(); i++){
        if((vector[i]+k)<=240){
            k = k + vector[i];
            count++;
        }
    }
    cout<<count<<endl;
}