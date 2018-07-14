#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
  int H, W, i, j, k, counter = 0;
  cin >> H >> W;

  string S[50];
  int d[8][2] = {{-1, -1}, {0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}};

  for(i = 0; i < H; ++i) cin >> S[i];

  for(i = 0; i < H; ++i){
    for(j = 0; j < W; ++j){
      if(S[i][j] == '#') continue;

      for(k = 0; k < 8; ++k){
        int xi = i + d[k][0];
        int yj = j + d[k][1];

        if(xi < 0 or xi >= H) continue;
        if(yj < 0 or yj >= W) continue;
        if(S[xi][yj] == '#') counter++;
      }
      S[i][j] = char(counter + '0');
      counter = 0;

    }
  }

  for(i = 0; i < H; ++i) cout << S[i] << endl;

  return 0;
}
