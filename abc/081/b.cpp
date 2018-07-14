#include <bits/stdc++.h>
using namespace std;

bool isEven(int x){
  return x%2==0 ? true : false;
}

int main(){
  int N, i, j;
  cin >> N;
  int A[N];
  int counter = 0;

  for(i=0;i<N;i++){
    cin >> A[i];
  }

  for(i=0;i<1000000000;i++){
    for(j=0;j<N;j++){
      if(isEven(A[j])){
        A[j] /= 2;
      } else {
        cout << counter << endl;
        return 0;
      }
    }
    counter++;
  }

}

