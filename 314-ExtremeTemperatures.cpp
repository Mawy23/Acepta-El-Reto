#include <iostream>
#include <vector>

using namespace std;

// true
void peaksAndValleys(const vector<int>& w, int& peak, int& valley) {
	peak = 0;
	valley = 0;
	for (int i = 1; i < w.size() - 1; i++)
		if (w[i - 1] < w[i] && w[i] > w[i + 1]) {
			peak = peak + 1;
		}
		else if (w[i - 1] > w[i] && w[i] < w[i + 1]) {
			valley = valley + 1;
		}

}
// peak = #k: 0 < k < v.size() : v[k - 1] < v[k] > v[k + 1]
// valley = #l: 0 < l < v.size() : v[l - 1] > v[l] < v[l + 1]

void solve() {
	int n, peak, valley;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	//solve the problem
	peaksAndValleys(v, peak, valley);

	cout << peak << " " << valley << endl;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		solve();
	return 0;
}
