#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  string op;
  vector<int> ans;

  while (1) {
    cin >> a >> op >> b;
    if (op == "?") {
      break;
    }
    if (op == "+") {
      ans.push_back(a + b);
    }
    if (op == "-") {
      ans.push_back(a - b);
    }
    if (op == "*") {
      ans.push_back(a * b);
    }
    if (op == "/") {
      ans.push_back(a / b);
    }
  }
  for (int i = 0; i < ans.size(); i++) {
    cout << ans.at(i) << endl;
  }
}
