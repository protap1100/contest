#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tCase;
    cin >> tCase;
    while(tCase--){
        int num,k;
        string str;
        cin >> num >> k >> str;
        vector<int> position;
        for(int i =0;i<num;i++){
            if(str[i] == '1') position.push_back(i);
        }
        int answer =0;
        int last = -k;
        for(int p : position){
            if (p - last >= k) {
                answer++;
                last = p;
            }
        }
        cout << answer << nl;
    }
    return 0;
}