#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void letsSolve(){
    int n,input; cin>>n;
    int count = 0;
 
    vector<int> vector;
    for(int i=0; i<n; i++){
        cin>>input;
        vector.push_back(input);
    }
    stable_sort(vector.begin(),vector.end());
 
    for(int i=0; i<vector.size()-1; i++){
        if(vector[i]<vector[i+1]){
            count++;
        }
    }
    if(count==(n-1)) cout<<"YES"<<endl;
    else if (n==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        letsSolve();
    }
}