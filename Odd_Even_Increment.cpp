#include <iostream>
#include<algorithm>
using namespace std;

int solve() {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int oddParity = arr[0] % 2;  
    for (int i = 0; i < n; i += 2) {
        if (arr[i] % 2 != oddParity) { // If the odd elements is not odd.
            cout << "NO"<<endl;
            return 0;
        }
    }

    if (n > 1) { // For within the range
        int evenParity = arr[1] % 2;
        for (int i = 1; i < n; i += 2) {
            if (arr[i] % 2 != evenParity) { // If the even elements is not even.
                cout << "NO"<<endl;
                return 0;
            }
        }
    }
    cout << "YES"<<endl;
    return 0;
}

int main() {
    int t; cin >> t;
    while (t--)
    solve();
}
