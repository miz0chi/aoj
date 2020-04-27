#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;

  if ((x - r) < 0 || (y - r) < 0 || (x + r) > W || (y + r) > H) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}
