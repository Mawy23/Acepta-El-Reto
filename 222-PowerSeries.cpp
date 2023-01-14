#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	int x, n, result, a;
	while (cin >> x >> n) {
		if (!cin)
			return 0;

		a = result = 1;

		for (int i = 0; i < n; i++) {
			a = (a * x) % 1000007;
			result = (result + a) % 1000007;
		}
		cout << result << endl;
	}
	return 0;
}
