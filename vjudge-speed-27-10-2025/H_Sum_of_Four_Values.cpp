#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                for (int l = k+1; l < n; l++) {
                    if (a[i] + a[j] + a[k] + a[l] == x) {
                        cout << i+1 << " " << j+1 << " " << k+1 << " " << l+1 << nl;
                        found = true;
                        break;
                    }
                }
                if(found) break;
            }
            if(found) break;
        }
        if(found) break;
    }

    if(!found) cout << "IMPOSSIBLE" << nl;

    return 0;
}
