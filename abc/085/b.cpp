#include <bits/stdc++.h>
using namespace std;


int main(){
  int N, i, j;
  cin >> N;
  int d[N];
  int counter = N;

  for(i=0;i<N;i++){
    cin >> d[i];
  }

  for(j=1;j<N;j++){
   if(d[j] >= d[j-1]) counter--; 
  }

  cout << counter << endl;

  return 0;
}

