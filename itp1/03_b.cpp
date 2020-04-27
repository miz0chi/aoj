#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  vector<int> x;

  for (int i = 0; i < 10000; i++) {
    cin >> n;
    x.push_back(n);
    if (n == 0) {
      break;
    }
  }
  for (int i = 0; i < 10000; i++) {
    if (x.at(i) == 0) {
      break;
    }
    cout << "Case " << i + 1 << ": " << x.at(i) << endl;
  }
}
