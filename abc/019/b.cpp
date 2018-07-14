#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
  string s;
  cin >> s;

  string ans;

  int cnt = 1;
  for(int i = 0; i < s.length(); i++){
	ans.push_back(s[i]);
    cnt = 1;

    int j = i+1;
    while(s[i] == s[j]) {
      cnt++;
      j++;
    }

    i += cnt-1;
    ostringstream ss;
    ss << cnt;
    ans += ss.str();
  }

  cout << ans << endl;

  return 0;
}
