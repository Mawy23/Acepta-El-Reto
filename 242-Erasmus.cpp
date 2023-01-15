#include <iostream>
#include <vector>

 // uncomment to read from a file instead of standard input
 //#include <fstream>

using namespace std;

void sum(long long int a, const vector<int>& v, long long int c) {
    long long int aux = c, r = 0;
    for (int i = 0; i < a; i++) {
        aux -= v[i];
        r += aux * v[i];
    }

    cout << r << endl;
}



int main() {

    long long int n, total = 0;

    cin >> n;
    while (n != 0) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            total += v[i];
        }
        sum(n, v, total);
        total = 0;
        cin >> n;
    }

    return 0;
}
