#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll n, x = LONG_MIN, sum = 0;
    cin >> n;

    for(ll i=0; i<n; i++) {
        ll a;
        cin >> a;
        if(a < x)
            sum += x-a;
        else
            x=a;
    }
    cout << sum;
}