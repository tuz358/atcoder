#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
  string W;
  string x = "aiueo";
  int state = 1;

  cin >> W;

  for(int i = 0; i < W.length(); i++){
    for(int j = 0; j < 5; j++){
      if(W[i] == x[j]) state = 0;
    }
	if(state) cout << W[i];
	state = 1;
  }

  cout << endl;

  return 0;
}
