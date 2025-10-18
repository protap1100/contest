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
        string str;
        cin >> str;
        bool palin= true;
        int left = 0;
        int right = str.size()-1;
        
        while(left < right){
            if(str[left] != str[right]){
                palin = false;
                break;
            }
            left++;
            right--;
        }
        if(palin){
            cout << 0 << nl;
        }else{
            cout << 2 << nl;
            cout << left +1 << " " << right +1 << nl;
        }
    }
    return 0;
}