#include<bits/stdc++.h>
using namespace std;
const char str[][10] = {
    "@", "8", "(", "|)", "3", "#",
    "6", "[-]", "|", "_|", "|<", "1",
    "[]\\/[]", "[]\\[]", "0", "|D",
    "(,)", "|Z", "$", "\'][\'", "|_|",
    "\\/", "\\/\\/", "}{", "`/", "2"
};

int main() {
    string s, d;
    
    getline(cin, s);
    const int n = s.size();
    
    for(int i = 0; i < n; i++) {
        if(!isalpha(s[i])) {
            d += s[i];
        }
        else {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 32;
            }
            d += str[s[i] - 'a'];
        }
    }
    cout << d << endl;
    return 0;
}