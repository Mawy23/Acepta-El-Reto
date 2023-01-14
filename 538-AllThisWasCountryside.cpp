#include <iostream>
#include <vector>

using namespace std;


void abuelo(int n, int m) {
    if (n < m) {
        cout << "SENIL" << endl;
    }
    else {
        cout << "CUERDO" << endl;
    }
}

bool solve() {
    // read case
    int n, m;
    cin >> n >> m;
    if ((n == 0 && m == 0) || (n > 1000 || m > 1000))
        return false;

    // compute and write the solution
    abuelo(n, m);

    return true;
}

int main() {
    while (solve());

    return 0;
}
