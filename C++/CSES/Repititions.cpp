#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0, count = 1;

    for(int i=0; i < s.length(); i++) {
        if(s[i] == s[i+1])
            count++;
        else{
            count=1;
        }
        ans = max(ans, count);
    }
    cout << ans;
}