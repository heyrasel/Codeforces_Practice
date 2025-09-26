#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> vector;
    for(int i=0; i<4; i++){
        int x;
        cin>>x;
        vector.push_back(x);
    }
    sort(vector.begin(), vector.end());
    int x = vector[3] - vector[0];
    int y = vector[2] - x;
    int z = vector[0] - y;
    cout<<x<<" "<<y<<" "<<z<<endl;


}