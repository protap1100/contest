#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    while(q--) {
        int l, r;
        cin >> l >> r;

        long long kr = r / 2;
        long long sumR = kr * (kr + 1);
        if (r % 2 == 1) sumR += (kr + 1);

        long long kl = (l - 1) / 2;
        long long sumL = kl * (kl + 1);
        if ((l - 1) % 2 == 1) sumL += (kl + 1);

        cout << (sumR - sumL) << "\n";
    }

    return 0;
}
