#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  constexpr char endl = '\n';
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    int x = i;
    if (x % 3 == 0) {
      cout << " " << i;
      x = 0;
    }
    while (x) {
      if (x % 10 == 3) {
        cout << " " << i;
        break;
      }
      x /= 10;
    }
  }
  cout << endl;
}
