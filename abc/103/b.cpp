#include <bits/stdc++.h>
using namespace std;

int main(){
  string S, T;
  cin >> S;
  cin >> T;

  string ans = "No";

  for(int i = 0; i < S.length(); i++) {
   string tmp = S;

   if(S == T) ans = "Yes";

   S[0] = tmp[S.length()-1];
   for(int j = 1; j < S.length()-1; j++){
     S[j] = tmp[j-1];
   }
   S[S.length()-1] = tmp[S.length()-2];
  }

  cout << ans << endl;

  return 0;
}
