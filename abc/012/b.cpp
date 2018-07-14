#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, h, m , s;
  cin >> N;

  h = N / 3600;
  m = (N - 3600*h)/60;
  s = N - 3600*h - 60*m;

  cout << setfill('0') << setw(2) << right << h << ':';
  cout << setfill('0') << setw(2) << right << m << ':';
  cout << setfill('0') << setw(2) << right << s << endl;

  return 0;
}
