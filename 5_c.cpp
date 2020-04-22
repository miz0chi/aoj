#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  vector<int> h, w;

  for (int i = 0; i < 10000; i++) {
    cin >> a >> b;
    if (a == 0 && b == 0) {
      break;
    }
    h.push_back(a);
    w.push_back(b);
  }
  for (int i = 0; i < h.size(); i++) {
    for (int j = 0; j < h.at(i); j++) {
      for (int k = 0; k < w.at(i); k++) {
        if ((j + k) % 2 != 0) {
          cout << ".";
        } else {
          cout << "#";
        }
      }
      cout << endl;
    }
    cout << endl;
  }
}
