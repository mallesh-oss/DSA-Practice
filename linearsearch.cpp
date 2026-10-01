#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> target;

    for(int i = 0; i < n; i++) {
        if(a[i] == target) {
            cout << "ele found";
            return 0;
        }
    }

    cout << "ele not found";

    return 0;
}