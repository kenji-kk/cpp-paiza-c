#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        string t;
        int h, m;
        cin >> t >> h >> m;
        int t_h = stoi(t.substr(0, 2));
        int t_m = stoi(t.substr(3));

        int a_h = t_h + h;
        int a_m = t_m + m;
        if (a_m >= 60) {
            a_h += 1;
            a_m -= 60;
        }
        if (a_h >= 24) {
            a_h -= 24;
        }

        string a_hs = to_string(a_h);
        string a_ms = to_string(a_m);
        if (a_hs.length() < 2) {
            a_hs = "0" + a_hs;
        }
        if (a_ms.length() < 2) {
            a_ms = "0" + a_ms;
        }
        cout << a_hs << ":" << a_ms << endl;
    }
}
