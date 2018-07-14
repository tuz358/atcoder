#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int A[N];
  for(int i = 0; i < N; i++) cin >> A[i];

  float ave = 0;
  int num = 0;
  for(int i = 0; i < N; i++){
    ave += A[i];
    if(A[i] != 0) num++;
  }

  cout << int(ceil(ave / num)) << endl;

  return 0;
}
