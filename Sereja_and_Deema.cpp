#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int seraja = 0, deema = 0;
    int left = 0;
    int right = n-1;
    int turn = 0;
    while(left<=right){
        if(turn%2==0){ // if even then it is sereja's turn
            if(arr[left]>arr[right]){
                seraja = seraja + arr[left];
                left++;
            }
            else{
                seraja = seraja + arr[right];
                right--;
            }
        }
        else{
            if(arr[left]>arr[right]){
                deema = deema + arr[left];
                left++;
            }
            else{
                deema = deema + arr[right];
                right--;
            }

        }
        turn++;
    }
    cout<<seraja<<" "<<deema<<endl;
}