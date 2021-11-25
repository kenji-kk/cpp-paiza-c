#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[N];
    int k;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    cin >> k;
    for(int i = 0; i < N;  i++){
        if(k == arr[i]){
            cout <<  i + 1 << endl;
            break;
        }
    }
}
