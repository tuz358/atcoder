#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;

  int ans[3];
  ans[0] = A+B;
  ans[1] = A-B;
  ans[2] = A*B;

  sort(ans, ans+3);

  cout << ans[2] << endl;

  return 0;
}
