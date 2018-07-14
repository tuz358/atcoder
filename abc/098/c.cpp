#include <bits/stdc++.h>
using namespace std;


int main(){
  int N;
  cin >> N;
  string S;
  cin >> S;

  int counterX = 0;
  int counterY = count(S.begin()+1, S.end(), 'E');
  int ans = counterX + counterY;

  for(int i = 1; i < N; i++){
    if(S[i-1] == 'W') {
      counterX++;
    }
    if(S[i] == 'E'){
      counterY--;
    }
    if(ans > counterX+counterY) ans = counterX + counterY;
  }

  cout << ans << endl;
  return 0;
}
