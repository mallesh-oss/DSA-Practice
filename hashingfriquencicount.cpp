#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int hash[13] = {0};

    for (int i = 0; i < n; i++) {
        hash[array[i]] += 1;
    }

    int q;
    cin >> q;

    while (q--) {
        int number;
        cin >> number;

        cout << hash[number] << endl;
    }

    return 0;
}