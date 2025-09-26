#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
    vector<int>vect1;
    vector<int>vect2;
    for(int i=1; i<=a; i++){
        if(a%i==0){
            vect1.push_back(i);
        }
    }
    for(int i=1; i<=b; i++){
        if(b%i==0){
            vect2.push_back(i);
        }
    }
    sort(vect1.begin(), vect1.end(), greater<int>());
    sort(vect2.begin(), vect2.end(), greater<int>());
    for(int i=0; i<vect1.size(); i++){
        for(int j=0; j<vect2.size(); j++){
            if(vect1[i]==vect2[j]){
                cout<<vect1[i]<<endl;
                return 0;
            }
        }
    }
}