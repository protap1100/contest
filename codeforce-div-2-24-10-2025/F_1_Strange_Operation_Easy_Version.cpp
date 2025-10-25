#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        sort(p.begin(), p.end());

        // If n is even, swap the middle two
        if (n % 2 == 0) {
            swap(p[n / 2 - 1], p[n / 2]);
        }

        for (int x : p) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
