#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, D, K, X, P;
    priority_queue<int> speed;
    cin >> N >> D >> K >> X;

    for(int i=0; i<N; i++) {
        int Ai;
        cin >> Ai;
        speed.push(Ai);
    }

    cin >> P;
    for(int i=0; i<K; i++) {
        int T = speed.top();
        speed.pop();
        speed.push(T*(100 - X)/100);
    }

    if(speed.top() < P)
        cout << "YES";
    else
        cout << "NO";
}