#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float summ = 0;
  int n = 1;
  for (;n<6;++n) {
    float tmp = 1/pow(2,n);
    cout << tmp << endl;
    summ += tmp;
  }
  cout << summ << endl;
}
//Калькулятор выдает 0,96875
/*Программа выдает:
0,5
0,25
0,125
0,0625
0,03125
0,96875 */
