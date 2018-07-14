#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, ret = 0;

  cin >> N;

  for(int i = 1; i <= N; i++){
    ret += 10000*i;
  }

  ret /= N;

  cout << int(ret) << endl;

  return 0;
}
