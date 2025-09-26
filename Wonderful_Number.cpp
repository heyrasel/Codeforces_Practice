#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> vector2;
    vector<int> vector;
    int odd = 0;
    if(n%2!=0){
        odd = 1;
    }
    while(n>0){
        vector.push_back(n%2);
        n = n/2;
    }
    vector2.resize(vector.size());
    int j = 0;
    for(int i=vector.size()-1; i>=0; i--){
        vector2[j] = vector[i];
        j++;
    }
    int flag = 0;
    for(int i=0; i<vector.size(); i++){
        if(vector[i]!=vector2[i]){
            flag = 1;
            break;
        }
    }
    if(flag ==0 and odd==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}