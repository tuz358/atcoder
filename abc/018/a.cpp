#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A;
  cin >> B;
  cin >> C;

  int x[3] = {A, B, C};
  sort(x, x+3, greater<int>());

  for(int i = 0; i < 3; i++){
    if(x[i] == A) cout << i+1 << endl;
  }
  for(int i = 0; i < 3; i++){
    if(x[i] == B) cout << i+1 << endl;
  }
  for(int i = 0; i < 3; i++){
    if(x[i] == C) cout << i+1 << endl;
  }

  return 0;
}
