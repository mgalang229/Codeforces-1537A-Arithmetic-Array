#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			sum += a;
		}
		// 1) The sum of the array equals n: Here the answer is 0 since the arithmetic 
		// mean of the array is initially 1
		// 2) The sum of the array is smaller than n: The answer is always 1 since we can 
		// add a single integer k such that sum + k = n + 1 is satisfied and more specifically 
		// k = n − sum + 1.
		// 3) The sum of the array is greater than n: If we add any number apart from 0 will add 
		// to the sum more or equal than to the number of elements. The number of 0's to add 
		// can be found by a loop of adding 0's until the number of elements is equal to 
		// the sum or by the simple formula of sum - n.
		if (sum < n) {
			cout << 1;
		} else {
			cout << sum - n;
		}
		cout << '\n';
	}
	return 0;
}
