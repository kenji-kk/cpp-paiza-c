#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3));
    string hs, ms;
    if (m + 30 >= 60) {
        hs = to_string(h+1);
        ms = to_string(m+30 - 60);
    } else {
        hs = to_string(h);
        ms = to_string(m+30);
    }
    if (hs.length() < 2) {
        hs = "0" + hs;
    }
    if (ms.length() < 2) {
        ms = "0" + ms;
    }
    cout << hs << ":" << ms << endl;
}
