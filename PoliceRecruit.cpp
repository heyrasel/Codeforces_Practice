#include<iostream>
#include<vector>
using namespace std;
int main(){
    int policeCount = 0, crimeCount = 0;
    int n; cin>>n;
      for(int i=0; i<n; i++){
        int input; cin>>input;
        if(input>0) policeCount = policeCount + input;
        if(input<0){
          if(policeCount<1){
            crimeCount++;
          }
          else{
            policeCount--;
          }
        }
      }
      cout<<crimeCount<<endl;
}