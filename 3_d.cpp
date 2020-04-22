#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b, c;
  cin >> a >> b >> c;
  int sum = 0;
  for (a; a <= b; a++) {
    if (c % a == 0) {
      sum++;
    }
  }
  cout << sum << endl;
}
