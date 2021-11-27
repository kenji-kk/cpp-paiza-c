#include <iostream>
#include <map>
using namespace std;

int main() {
    int p, q, r;
    cin >> p >> q >> r;
    
    map<int, int> AB;
    map<int, int> BC;

    for (int x = 0; x < p; ++x) {
        int i, j;
        cin >> i >> j;
        AB[i] = j;
    }

    for (int x = 0; x < q; ++x) {
        int j, k;
        cin >> j >> k;
        BC[j] = k;
    }

    for (int i = 1; i <= p; ++i) {
        cout << i << ' ' << BC[AB[i]] << endl;
    }
}
