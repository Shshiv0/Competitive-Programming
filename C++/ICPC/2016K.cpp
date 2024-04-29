#include<bits/stdc++.h>
using namespace std;

const int maxn = ((1 << 20) + 10);
const double EXP = exp(1.0);

double fac[maxn];

void setup() {
    fac[0] = 0;
    for(int i = 1; i < maxn; ++i) {
        fac[i] = fac[i - 1] + log(i);
    }
}

int k, r;

int main() {
    setup();

    while(~scanf("%d %d", &k, &r)) {
        double ans = 0;
        int lim = 1 << k;

        for(int i = 1; i <= k; ++i) {
            int m = (1 << i);

            if(lim - r - m + 1 < 0)
                break;
            
            ans += exp((fac[lim - r] - fac[lim - r -  m + 1]) - (fac[lim - 1] - fac[lim - m]));
        }
        printf("%.5f\n", ans);
    }
    return 0;
}