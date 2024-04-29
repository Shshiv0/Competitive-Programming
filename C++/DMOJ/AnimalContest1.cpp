#include <bits/stdc++.h>

using namespace std;

int main() {
    int S, R;
    cin >> S >> R;

    int squareArea = S*S;
    int circleArea = 3.14*(R*R);

    if(squareArea > circleArea)
        cout << "SQUARE";
    else
        cout << "CIRCLE";
}