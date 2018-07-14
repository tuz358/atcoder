#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string S[N];
  for(int i = 0; i < N; i++) cin >> S[i];

  int max = 0, now_max = 0;

  for(int i = 0; i < N; i++){
    int counter = 0;
    for(int j = 0; j < N; j++){
      if(S[i] == S[j]) counter++;
    }
    if(counter > now_max) {
      max = i;
      now_max = counter;
    }
  }

  cout << S[max] << endl;

  return 0;
}
