#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M, K;
    cin >> N >> M >> K;
    vector<int> arr(M);
    int flag = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[j];
            if(arr[j] == K){
                flag++;
            }
        }
        cout << flag << endl;
        flag = 0;
        
    }
}
