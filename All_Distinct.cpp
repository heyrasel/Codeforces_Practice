#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    vector<int> vec;
    int n; 
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    bool removed = true;
    while (removed) {
        removed = false;
        for (int i = 0; i < vec.size() - 1; i++) {
            if (vec[i] == vec[i + 1]) {
                // removing both duplicates
                vec.erase(vec.begin() + i);
                vec.erase(vec.begin() + i); // i+1 after removing i coz i is alredy deleted.
                removed = true; 
                break;
            }
        }
    }
    cout << vec.size() << endl;
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
}



