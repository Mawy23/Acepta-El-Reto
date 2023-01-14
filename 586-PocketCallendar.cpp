#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calendar(const vector<int>& v) {
    int r = 0, finalSum = 0;
    vector<int>* temp = (vector<int>*) & v;
    sort(temp->begin(), temp->end());

    r = v[v.size() - 1] - v[0] - (v.size() - 1);

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
    int r = calendar(v);

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
