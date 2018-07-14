#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  int ans = 0;
  int x[9] = {0, 1, 0, 1, 2, 3, 0, 1, 0};

  for(int i = 0; i < n; i++){
    ans += x[a[i] - 1];
  }

  cout << ans << endl;

  return 0;
}
