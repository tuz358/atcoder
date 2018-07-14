#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  int T[N];
  for(int i = 0; i < N; i++) cin >> T[i];

  int ret = T[0];  
  for(int i = 1; i < N; i++) {
    if(ret >= T[i]) ret = T[i];
  }

  cout << ret << endl;

  return 0;
}
