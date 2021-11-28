#include <iostream>
using namespace std;
int main(void){
    int n,a,b;
    cin >> n >> a >> b;
    int p = 1;
    int k = 1;
    int flag  = 0;
    while(k <= n){
        k += p*a;
        p += k%b;
        flag++;
    }
    cout << flag << endl;
    
}
