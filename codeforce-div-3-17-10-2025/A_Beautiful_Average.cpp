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
        int num;
        cin >> num;
        vector<int> vec(num);
        for(int i =0;i<num;i++){
            cin >> vec[i];
        }
        int maxVal = vec[0];
        for (int i = 0; i < num; i++) {
            if (vec[i] > maxVal) {
                maxVal = vec[i];
            }
        }
        cout << maxVal << "\n";
    }
    return 0;
}