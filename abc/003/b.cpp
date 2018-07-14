#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
  string S, T;
  string atcoder = "atcoder";
  int win_flag = 1;

  cin >> S;
  cin >> T;

  for(int i = 0; i < S.length(); i++) {
    if(S[i] == T[i]) {
      continue;
    } else if(S[i] == '@') {
      if((int)atcoder.find(T[i]) == -1) win_flag = 0;
    } else if(T[i] == '@') {
      if((int)atcoder.find(S[i]) == -1) win_flag = 0;
    } else if(S[i] != T[i]) {
      win_flag = 0;
    }
  }
  
  if(win_flag) {
    cout << "You can win" << endl;
  } else {
    cout << "You will lose" << endl;
  }


  return 0;
}
