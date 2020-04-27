#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  constexpr char endl = '\n';
  cout << fixed << setprecision(15);

  vector<bool> S(13), H(13), C(13), D(13);

  int n;
  cin >> n;
  string op;
  int a;

  for (int i = 0; i < n; i++) {
    cin >> op >> a;
    if (op == "S") {
      S.at(a - 1) = true;
    } else if (op == "H") {
      H.at(a - 1) = true;
    } else if (op == "C") {
      C.at(a - 1) = true;
    } else if (op == "D") {
      D.at(a - 1) = true;
    } else {
      cout << "error" << endl;
      break;
    }
  }

  for (int i = 0; i < 13; i++) {
    if (!S.at(i)) {
      cout << "S " << i + 1 << endl;
    }
  }
  for (int i = 0; i < 13; i++) {
    if (!H.at(i)) {
      cout << "H " << i + 1 << endl;
    }
  }
  for (int i = 0; i < 13; i++) {
    if (!C.at(i)) {
      cout << "C " << i + 1 << endl;
    }
  }
  for (int i = 0; i < 13; i++) {
    if (!D.at(i)) {
      cout << "D " << i + 1 << endl;
    }
  }
}
