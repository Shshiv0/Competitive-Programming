#include <bits/stdc++.h>
using namespace std;

int main() {
    string r = "";
    int n, x;
    cin >> n >> x;

    if ((n-x)%2==0) {
        for(int i=0; i<x; i++) {
            r += "0";
        }
        for(int i=0; i<n-x; i++) {
            if (i%2==0)
                r += "1";
            else
                r += "0";
        }
        cout << r;
    }
    else{
        cout << "-1";
    }
}