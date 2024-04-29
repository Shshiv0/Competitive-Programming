#include <bits/stdc++.h>
using namespace std;

struct board {
    int patient[8];
    int donor[8];
};

int diff;

board init, b;

int t(int donor, int patient) {
    int sum=0;
    while(b.donor[donor] && b.patient[patient]) {
        sum++;
        b.donor[donor]--;
        b.patient[patient]--;
    }
    return sum;
}

int c1() {
    int sum=0;

    sum += t(0,0);
    sum += t(1,1);
    sum += t(0,1);
    sum += t(2,2);
    sum += t(0,2);
    sum += t(4,4);
    sum += t(0,4);
    sum += t(3,3);
    sum += t(2,3);
    sum += t(5,5);
    sum += t(4,5);
    sum += t(1,3);
    sum += t(1,5);
    sum += t(0,3);
    sum += t(0,5);
    sum += t(6,6);
    sum += t(4,6);
    sum += t(2,6);
    sum += t(0,6);

    for (int i=0; i<8; i++)
        sum+=t(i,7);
    return sum;
}

int c2() {
    int sum = 0;

    sum += t(0,0);
    sum += t(1,1);
    sum += t(0,1);
    sum += t(2,2);
    sum += t(0,2);
    sum += t(4,4);
    sum += t(0,4);
    sum += t(3,3);
    sum += t(1,3);
    sum += t(5,5);
    sum += t(1,5);
    sum += t(2,3);
    sum += t(0,3);
    sum += t(4,5);
    sum += t(0,5);
    sum += t(6,6);
    sum += t(4,6);
    sum += t(2,6);
    sum += t(0,6);

    for (int i  = 0; i < 8; i++)
        sum+=t(i,7);
    return sum;
}

int main() {

    for(int i=0; i<8; i++) {
        cin >> init.donor[i];
    }

    for(int i=0; i<8; i++) {
        cin >> init.patient[i];
    }
    b=init;
    int a = c1();

    b=init;
    int y = c2();
    
    cout << max(a,y);
}