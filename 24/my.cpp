#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<string> > a(n,vector<string>(2));
    for(int i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1];
    }
    string name;
    cin  >> name;
    for(int i = 0; i < n; i++){
        if(name == a[i][0]){
            cout << a[i][1] << endl;
            break;
        }
    }
}
