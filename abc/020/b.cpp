#include <bits/stdc++.h>
using namespace std;

int main(){
  string A, B;
  cin >> A >> B;

  string sum = A + B;

  cout << atoi(sum.c_str()) * 2 << endl;

  return 0;
}
