#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void result() {
    ll n;
    cin >> n;

    if (n < 7 or n == 9) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    if (n%3 == 0)
        cout << 1 << " " << 4 << " " << (n - 5) << "\n";
    else
        cout << 1 << " " << 2 << " " << (n - 3) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t = 1;
    cin >> t;

    while (t--) {
        result();
    }
}