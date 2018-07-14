#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;

  char ans = '!';

  if(A+B == C){
    if(A-B == C) {
      ans = '?';
    } else {
      ans = '+';
    }
  } else if(A-B == C){
    ans = '-';
  }

  cout << ans << endl;

  return 0;
}
