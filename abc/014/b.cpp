#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, X;
  cin >> n >> X;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  int ans = 0, j = 1;
  for(int i = 0; i < n; i++){
    if((j & X) != 0) ans += a[i];
    j *= 2;
  }
 
  cout << ans << endl;
  return 0;
}
