#include <bits/stdc++.h>
using namespace std;

int main(){
  int M, D;
  cin >> M >> D;

  string ans = "YES";
  if(M % D != 0) ans = "NO";

  cout << ans << endl;

  return 0;
}
