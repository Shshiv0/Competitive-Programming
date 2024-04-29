#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll int n, nums, s=0;
    cin >> n;

    for(int i=0; i<n-1; i++) {
        cin >> nums;
        s += nums;
    }

    cout << n*(n+1)/2-s;
}