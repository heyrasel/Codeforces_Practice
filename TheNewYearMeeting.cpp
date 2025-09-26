#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3; cin>>x1>>x2>>x3;
    int ans1,ans2,ans3;
    ans1 = abs(x1-x3);
    ans2 = abs(x2-x3);
    int res1 = ans1+ans2;
    ans1 = 0 ; ans2 = 0;
    ans1 = abs(x1-x2);
    ans2 = abs(x2-x3);
    int res2 = ans1+ans2;
    ans1 = 0 ; ans2 = 0;
    ans1 = abs(x1-x2);
    ans2 = abs(x1-x3);
    int res3 = ans1+ans2;

    int min1 = min(res1,res2);
    int min2 = min(min1,res3);
    cout<<min2<<endl;
    return 0;

}