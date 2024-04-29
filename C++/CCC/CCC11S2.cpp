#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	
    string A[N];
	
    for (int i=0; i<N; i++) {
		cin >> A[i];
	}
	
    int count = 0;
	for (int i=0; i<N; i++) {
		string ans;
		cin >> ans;
		
        if (A[i]==ans)
			count++;
	}
	
    cout << count;
}