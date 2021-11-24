#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    string a = s.substr(0,2);
    string b = s.substr(3);
    int c = stoi(b) + 30;
    if(c >= 60){
        if(to_string(c - 60).length() == 1){
            b = "0" + to_string(c - 60);
        }else{
            b = to_string(c - 60);
        }
        if(stoi(a) == 23){
            a =  "00";
        }else{
            if(to_string(stoi(a)).length() == 1){
                a = "0" + to_string(stoi(a) + 1);
            }else{
                a = to_string(stoi(a) + 1);
            }
        }
    }else{
        b = to_string(c);
    }
    cout << a << ":"  <<  b << endl;
}
