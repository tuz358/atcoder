#include <bits/stdc++.h>
using namespace std;

int tribonacci(int n){
  int a1 = 0, a2 = 0, a3 = 1, tmp;
  for(int i = 1; i < n; i++){
    tmp = (a1 + a2 + a3)%10007;
    a1 = a2;
    a2 = a3;
    a3 = tmp;
  }
  return(a1);
}

int main(){
  int n, an;
  cin >> n;

  an = tribonacci(n);

  cout << an << endl;

  return 0;
}
