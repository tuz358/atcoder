#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, X;
  cin >> n >> X;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  int ans = 0;
  for(int i = 0; i < n; i++){
    if(X >> i & 1) ans += a[i];
  }
 
  cout << ans << endl;
  return 0;
}
