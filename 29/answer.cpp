#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    int paiza = 1;
    int kyoko = 1;
    int times = 0;
    while (true) {
        times++;
        kyoko += paiza * a;
        
        if (kyoko > n) {
            break;
        }
        paiza += kyoko % b;
    }
    cout << times << endl;
}
