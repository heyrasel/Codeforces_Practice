#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> vector;
    for(int i=0; i<n; i++){
        int input; cin>>input;
        vector.push_back(input);
    }
    int count = 0, minimum,maximum;
    minimum = vector[0];
    maximum = vector[0];
    for(int i=1; i<vector.size(); i++){
        if(minimum<vector[i]){
            count++;
            minimum = vector[i];
        }
        if(maximum>vector[i]){
            count++;
            maximum = vector[i];
        }
    }
    cout<<count<<endl;
}