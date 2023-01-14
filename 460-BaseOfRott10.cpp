#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	string n;
	while (cin >> n) {
		if (n.length() == 1) {
			cout << n << endl;
			continue;
		}
		for (int i = 0; i < n.size() - 1; i++) {
			cout << n[i];
			cout << "0";
		}
		cout << n[n.size() -1] << endl;
	}
	return 0;
}

