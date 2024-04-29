#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    N++;

    int sumT = 0;
    int sumS = 0;
    while(N--){
        string text;
        getline(cin, text);
        for(char c : text){
            if(c=='t' || c=='T')
                sumT++;
            else if(c=='s' || c=='S')
                sumS++;
        }
    }

    if (sumT > sumS)
        cout << "English";
    else if(sumT < sumS || sumT == sumS)
        cout << "French";
}