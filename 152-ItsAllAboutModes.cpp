#include <iostream>
#include <vector>

// uncomment to read from a file instead of standard input
//#include <fstream>

using namespace std;

// Pre: true
int mode(vector<int> v) {

    // Sorting the vector from lower to higher numbers.
    for (int i = 1; i < v.size(); ++i) {
        int x = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > x) {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = x;
    }

    // Getting the mode.

    int m = v[0]; // Contains the mode at any point of the execution of the segment that goes from 0 and k - 1.
    int fm = 1; // Frequency of the mode.
    int f = 1; // Frequency of the last value processed.
    int k = 1; // Index.

    while (k < v.size()) { // We iterate the vector from 1 to the last element.
        if (v[k] == v[k - 1]) {
            ++f;
            if (f > fm) {
                m = v[k]; fm = f;
            }
        }
        else {
            f = 1;
        }
        ++k;
    }
    return m;
}
// Pos: 

bool solve() {
    // read case
    int n;
    cin >> n;
    if (n == 0)
        return false;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    // compute solution
    int r = mode(v);

    // write solution
    cout << r << endl;

    return true;
}

int main() {
    // uncomment to read from a file instead of standard input
    // ifstream ifs("sample.in");
    // cin.rdbuf(ifs.rdbuf());

    while (solve());

    return 0;
}
