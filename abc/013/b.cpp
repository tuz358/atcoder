#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a;
  cin >> b;

  int ans1 = 0, ans2 = 0;

  int tmp = a;
  while(1){
    if(tmp == b) break;
    if(tmp == 9) {
      tmp = 0;
    } else {
      tmp++;
    }
    ans1++;
  }

  tmp = a;
  while(1){
    if(tmp == b) break;
    if(tmp == 0) {
      tmp = 9;
    } else {
      tmp--;
    }
    ans2++;
  }

  if(ans1 > ans2){
    cout << ans2 << endl;
  } else {
    cout << ans1 << endl;
  }

  return 0;
}
