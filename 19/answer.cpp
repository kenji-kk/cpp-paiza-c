#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, k; 
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i) {
        int ans = 0;
        vector<int> a(m);
        for (int j = 0; j < m; ++j) {
            cin >> a[j];
        }
        for (int j = 0; j < m; ++j) {
            if (a[j] == k) {
                ans++;
            }
        }
        cout << ans << endl;
    }
}
