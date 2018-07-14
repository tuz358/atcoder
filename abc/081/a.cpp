#include <bits/stdc++.h>
using namespace std;

int main(){
  int val, i;
  int counter = 0;
  int s[3];

  cin >> val;

  for(i = 0;i < 3;i++){ 
    s[i] = (val % 10);
    val /= 10;
  }

  for(i = 0;i < 3;i++){
    if(s[i] == 1) counter++;
  }

  cout << counter << endl;
}

