#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a;
  cin >> b;

  int diff = abs(a - b);
  int ans = min(diff , 10 - diff);

  cout << ans << endl;

  return 0;
}
