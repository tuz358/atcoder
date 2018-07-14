#include <bits/stdc++.h>
using namespace std;

int main(){
  float m, VV;

  cin >> m;
  m /= 1000;

  if(m < 0.1){
    VV = 0;
  } else if(m <= 5.0){
    VV = m * 10;
  } else if(6.0 <= m and m <= 30.0){
    VV = m + 50;
  } else if(35.0 <= m and m <= 70.0){
    VV = (m - 30) / 5 + 80;
  } else {
    VV = 89;
  }

  cout << setfill('0') << setw(2) << right << int(VV) << endl;

  return 0;
}
