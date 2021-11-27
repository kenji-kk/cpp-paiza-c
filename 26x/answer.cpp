#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> dmg;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        dmg[s] = 0;
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        string p;
        int a;
        cin >> p >> a;
        dmg[p] += a;
    }

    for (auto iter = dmg.begin(); iter != dmg.end(); ++iter) {
        cout << iter->second << endl;
    }
}
