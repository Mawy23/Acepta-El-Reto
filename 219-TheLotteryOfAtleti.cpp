#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int atleti(const vector<int>& v) {
    int r = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) {
            r++;
        }
    }
    return r;
}


void solve() {
    // read case
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    // compute solution
    int r = atleti(v);

    // write solution
    cout << r << endl;
}

int main() {
    // uncomment to read from a file instead of standard input
    // ifstream ifs("sample.in");
    // cin.rdbuf(ifs.rdbuf());

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();

    return 0;
}
