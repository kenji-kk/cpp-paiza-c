#include <iostream>
using namespace std;
int main(void){
   int h;
   cin >> h;
   h -= 2;
   int flag = 2;
   int pa = 1;
   int ppa = 1;
   int ma = 1;
   int pma = 1;
   int dma = 1;
   while(h > 0){
       flag++;
       //paoza -> monster
       dma = ma + pma;
       //monster -> paiza
       h -= pa*2 + ppa;
       //次のための代入
       pma = ma;
       ma = pa*2 + ppa;
       ppa = pa;
       pa = dma;
      
   }
   cout << flag << endl;
}
