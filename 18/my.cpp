#include <iostream>
#include <vector>
using namespace std;

int main(){
    int M;
    cin >> M;
    vector<char> m(M);
    for(int i = 0; i < M; i++){
        cin >> m[i];
    }
    int N;
    cin >> N;
    vector<string> n(N);
    for(int i = 0; i < N; i++){
        cin >> n[i];
    }
    bool flag = false;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            for(int g = 0; g < n[j].length(); g++){
                if(n[j][g] == m[i]){
                    flag = true;
                   
                }
            }
            if(flag){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
            flag = false;
        }
        
       
    }
}
