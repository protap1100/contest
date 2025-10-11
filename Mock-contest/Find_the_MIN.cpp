#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tCase;
    cin >> tCase;
    priority_queue<int, vector<int>, greater<int>> pQue; 
    unordered_map<int,int> freq; 
    while (tCase--) {
        int a;
        cin >> a;
        if (a == 1) {
            int b;
            cin >> b;
            pQue.push(b);
            freq[b]++;
        }
        else if (a == 2) {
            while (!pQue.empty() && freq[pQue.top()] == 0) {
                pQue.pop();
            }
            if (pQue.empty()) {
                cout << "empty\n";
            } else {
                int minimumVal = pQue.top();
                cout << minimumVal << "\n";
                freq[minimumVal] = 0;
                pQue.pop();    
            }
        }
    }
    return 0;
}
