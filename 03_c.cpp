#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  vector<int> x, y;

  for (int i = 0; i < 10000; i++) {
    cin >> a >> b;
    if (a == 0 && b == 0) {
      break;
    }
    if (a > b) {
      swap(a, b);
    }
    x.push_back(a);
    y.push_back(b);
  }
  for (int i = 0; i < x.size(); i++) {
    cout << x.at(i) << " " << y.at(i) << endl;
  }
}
