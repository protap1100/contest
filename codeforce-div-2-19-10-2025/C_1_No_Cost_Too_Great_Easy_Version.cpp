#include <bits/stdc++.h>
using namespace std;

// Helper function to check if GCD > 1 exists between any two numbers
bool hasGCDGreaterThanOne(vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (__gcd(a[i], a[j]) > 1)
                return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i]; // সব b[i] = 1, কিন্তু ইনপুট নিতে হবে

        // Case 1: যদি আগেই GCD > 1 হয়, খরচ 0
        if (hasGCDGreaterThanOne(a)) {
            cout << 0 << "\n";
            continue;
        }

        // Case 2: একবার ইনক্রিমেন্ট করে দেখি
        int ans = INT_MAX;

        // Try increasing each element by 1
        {
            vector<int> temp = a;
            for (int i = 0; i < n; i++) {
                temp[i] = a[i] + 1;
                if (hasGCDGreaterThanOne(temp)) {
                    ans = min(ans, 1);
                    break;
                }
                temp[i] = a[i]; // restore
            }
        }

        // Try increasing each element by 2
        if (ans == INT_MAX) {
            vector<int> temp = a;
            for (int i = 0; i < n; i++) {
                temp[i] = a[i] + 2;
                if (hasGCDGreaterThanOne(temp)) {
                    ans = min(ans, 2);
                    break;
                }
                temp[i] = a[i]; // restore
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
