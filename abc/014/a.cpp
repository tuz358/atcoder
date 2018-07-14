#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a;
  cin >> b;

  int ans = 0;
  while(1){
    if ((ans+a) % b == 0) break;
    ans++;
  }

  cout << ans << endl;

  return 0;
}
