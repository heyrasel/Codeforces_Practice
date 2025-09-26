// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<math.h>
// using namespace std;
// void solve(){
//     long long int a; cin>>a;
//     vector<int> vector;
//     int count = 0;
//     long long int temp = a;
//     while(temp/2!=0){
//         temp = temp/2;
//         count++;
//     }
//    count++;
//     while(count!=0){
//         vector.push_back(a%2);
//         a = a/2;
//         count--;
//     }
//     int result = 0;
//     sort(vector.begin(),vector.end(),greater<int>());
//     int i=0;
//     while(vector[i]!=0){
//        result = result*2+1;
//        i++; 
//     }
//     cout<<result<<endl; 
// }
// int main(){
//     int t; cin>>t;
//     while(t--){
//         solve();
//     }
// }







#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    long long int a; 
    cin >> a;
    vector<int> vector;
    while (a > 0) {
        vector.push_back(a % 2);
        a = a / 2;
    }
    int ones = 0;
    for (int b : vector) {
        if (b == 1) ones++;
    }
    long long int result = 0;
    for (int i = 0; i < ones; i++) {
        result = result * 2 + 1;
    }
    cout << result << endl; 
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
}
