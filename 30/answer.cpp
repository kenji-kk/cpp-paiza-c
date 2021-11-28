#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H;
    cin >> H;

    vector<int> a = {0, 1, 1};
    vector<int> b = {0, 1, 1};

    int dmg = 2;

    int i = 2;
    while (dmg < H) {
        a[0] = a[1];
        a[1] = a[2];
        b[0] = b[1];
        b[1] = b[2];

        a[2] = b[0] + b[1];
        b[2] = a[0] + 2 * a[1];

        dmg += b[2];

        i++;
    }
    cout << i << endl;
}
