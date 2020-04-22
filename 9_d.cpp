#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<string> vs;

typedef vector<vector<int>> vvi;
typedef vector<vector<ld>> vvd;
typedef vector<vector<ll>> vvl;

typedef vector<vector<vector<int>>> vvvi;
typedef vector<vector<vector<ld>>> vvvd;
typedef vector<vector<vector<ll>>> vvvl;

constexpr int MOD = 1000000007;
constexpr char nl = '\n';

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string str, op, p;
  int q, a, b;
  cin >> str >> q;

  for (int i = 0; i < q; i++) {
    cin >> op >> a >> b;
    if (op == "print") {
      cout << str.substr(a, b - a + 1) << nl;
    } else if (op == "reverse") {
      reverse(str.begin() + a, str.begin() + b + 1);
    } else if (op == "replace") {
      cin >> p;
      str.replace(a, b - a + 1, p);
    }
  }
}
