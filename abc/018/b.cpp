#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  int N;
  cin >> S;
  cin >> N;

  int l[N], r[N];
  for(int i = 0; i < N; i++) cin >> l[i] >> r[i];

  for(int i = 0; i < N; i++) {
    reverse(S.begin() + l[i]-1, S.begin()+r[i]);
  }

  cout << S << endl;

  return 0;
}
