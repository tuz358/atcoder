#include <bits/stdc++.h>
using namespace std;

int main(){
  int A[3];
  cin >> A[0] >> A[1] >> A[2];

  sort(A, A+3);

  int cost = 0;
  for(int i = 1; i < 3; i++) {
    cost += abs(A[i] - A[i-1]);
  }

  cout << cost << endl;

  return 0;
}
