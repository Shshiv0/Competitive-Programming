#include <bits/stdc++.h>

using namespace std;

const int s = 101;
int a[s], b[s];

void sol() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        cin >> a[i];
    }

    for(int i=1; i<=n; i++) {
        cin >> b[i];
    }

    int c = 0;

    while(true) {
        sort(a+1, a+1+n);

        bool com = true;
        for(int i=1; i<=n; i++) {
            if(a[i] > b[i]) {
                com = false;
                break;
            }
        }
        if(com == true) {
            break;
        }

        a[n] = 0;
        c++;
    }
    cout << c << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        sol();
    } 
}