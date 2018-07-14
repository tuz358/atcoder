#include <bits/stdc++.h>
using namespace std;

int main(){
  int S[3], e[3];
  for(int i = 0; i < 3; i++) cin >> S[i] >> e[i];

  int ans = 0;
  for(int i = 0; i < 3; i++){
    ans += S[i] * e[i]*0.1;
  }

  cout << ans << endl;

  return 0;
}
