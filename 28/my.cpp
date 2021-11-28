#include <iostream>
using namespace std;
int main(void){
    int n = 10000;
    while(n%13 != 0){
        n++;
    }
    cout << n << endl;
}
