#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        mpp[array[i]]++;
    }

    int q;
    cin >> q;

    while (q--) {
        int number;
        cin >> number;

        cout << mpp[number] << endl;
    }

    return 0;
}