#include <bits/stdc++.h>
using namespace std;

int main(){
  string X;
  cin >> X;

  string ans = "YES";

  if(X[0] != 'o' and X[0] != 'k' and X[0] != 'u' and X[0] != 'c') ans = "NO";
 
  for(int i = 1; i < X.length()-1; i++){
    if (X[i] == 'o' or X[i] == 'k' or X[i] == 'u' or X.substr(i-1, i+1) == "ch") {
    continue;
    } else {
      ans = "NO";
    }
  }

  cout << ans << endl;

  return 0;
}
