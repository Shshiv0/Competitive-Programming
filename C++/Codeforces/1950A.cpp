#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    string r[t];
    
    for(int i=0; i<t; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if(a < b && b < c) {
            r[i] = "STAIR";
        }
        else if(a < b && b > c) {
            r[i] = "PEAK";
        }
        else {
            r[i] = "NONE";
        }
    }

    for(int i=0; i<t; i++) {
        cout << r[i] << endl;
    }
}