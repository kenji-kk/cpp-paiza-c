#include <iostream>
using namespace std;

int main() {
    int n = 10000;
    while (true) {
        if (n % 13 == 0) {
            break;
        }
        n++;
    }
    cout << n << endl;
}
