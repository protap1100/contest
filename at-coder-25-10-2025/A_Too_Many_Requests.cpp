#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;
    cin >> m >> n;
    for(int i =0;i<m;i++){
        if(i < n){
            cout << "OK" << nl;
        }else{
            cout << "Too Many Requests" << nl;
        }
    }
    return 0;
}