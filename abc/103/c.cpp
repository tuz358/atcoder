#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int a[N];
  for(int i = 0; i < N; i++) cin >> a[i];

  int max_fm = 0;
  for(int i = 0; i < N; i++){
    max_fm += a[i] - 1;
  }

  cout << max_fm << endl;

  return 0;
}
