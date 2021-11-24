#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n;  i++){
        string a;
        cin >> a;
        int h,m;
        h = stoi(a.substr(0,2));
        m = stoi(a.substr(3));
        int addh, addm;
        cin >> addh >> addm;
        string ah,am;
        if((m + addm) > 59){
            m = (m + addm) - 60;
            h = h + 1 + addh;
            if(h > 23){
                h = h - 24;
            }
        }else{
            m  = m + addm;
            h = h + addh;
            if(h  > 23){
                h = h - 24;
            }
        }
        if(to_string(h).length() < 2){
            ah = "0" + to_string(h);
        }else{
            ah = to_string(h);
        }
        if(to_string(m).length() < 2){
            am = "0"  +  to_string(m);
        }else{
            am =  to_string(m);
        }
        cout << ah  + ":" + am <<  endl;
    }
}
