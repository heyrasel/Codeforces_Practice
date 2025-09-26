#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    double totalDrinks = k*l;
    double numberOfToast = floor(totalDrinks/n);
    double limeNumber = c*d;
    double toast = floor(p/np);
    double min1 = min(numberOfToast,limeNumber);
    double min2 = min(toast,min1);
   cout<<floor(min2/n)<<endl;

}