#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m; 
    cin >> m;
    vector<char> c(m);

    for (int i = 0; i < m; ++i) {
        cin >> c[i];
    }

    int n; 
    cin >> n;
    vector<string> s(n);

    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            bool flag = false;
            for (int k = 0; k < s[j].length(); ++k) {
                if (s[j][k] == c[i]) {
                    flag = true;
                }
            }
            if (flag) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}
