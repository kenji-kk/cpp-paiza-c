#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int> > ab(n, vector<int>(2));
    for (int i = 0; i < n; ++i) {
        cin >> ab[i][0];
        cin >> ab[i][1];
    }
    
    sort(ab.begin(), ab.end(), greater<vector<int> >());

    for (int i = 0; i < n; ++i) {
        cout << ab[i][0] << " " << ab[i][1] << endl;
    }
