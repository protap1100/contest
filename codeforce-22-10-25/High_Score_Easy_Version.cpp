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
        int n1,n2;
        cin >> n1 >> n2;
        vector<int> vec1(n1);
        vector<int> vec2(n2);
        for(int i =0;i<n1;i++) cin >> vec1[i];
        for(int i =0;i<n1;i++) cin >> vec2[i];
        int sum = 0;

        for(int i =0;i<n1;i++){
            for(int j =0;j<n1;j++){
                if(vec1[i] != vec2[j]){
                    sum= sum + vec1[i] + vec2[j];
                    vec1.erase(vec1.begin() + i);
                }
            }
        }
        cout << sum << nl;
    }
    return 0;
}