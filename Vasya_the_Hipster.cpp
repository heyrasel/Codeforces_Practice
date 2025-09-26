#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[2] = {0};
    cin>>arr[0];
    cin>>arr[1];
    sort(arr, arr+3);
    if(arr[1]>arr[0]){
        cout<<arr[0]<<" ";
        arr[1] = arr[1] - arr[0];
        cout<<arr[1]/2<<endl;
    }
    else if(arr[0]==arr[1]){
        cout<<arr[1]<<" "<<0<<endl;
        return 0;
    }
}