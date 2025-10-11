#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int freq[26] = {0};
        int maxFreq = 0;
        for (char c : s) {
            freq[c - 'a']++;
            maxFreq = max(maxFreq, freq[c - 'a']);
        }
        int minOps = max(maxFreq, (n + 1) / 2); 
        cout << minOps << "\n";
    }
    return 0;
}
