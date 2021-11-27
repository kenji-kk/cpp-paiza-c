#include <iostream>
#include <map>
using namespace std;
int main(void){
    int a, b, c;
    cin >> a >> b >> c;
    map<int,int> ab;
    map<int,int> bc;
    for(int i = 0; i < a; i++){
        int n,m;
        cin >> n >> m;
        ab[n] = m ;
    }
    for(int i = 0; i < b; i++){
        int n,m;
        cin >> n >> m;
        bc[n] = m;
    }
    for(auto iter = ab.begin(); iter != ab.end(); ++iter){
        cout << iter->first << ' ' << bc[iter->second]  << endl;
    }
}
