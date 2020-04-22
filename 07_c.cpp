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

const int MOD = 1000000007;
const char nl = '\n';

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(15);

  int r, c;
  cin >> r >> c;

  vvi culc(r + 1, vi(c + 1));

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> culc.at(i).at(j);
      culc.at(i).at(c) += culc.at(i).at(j);
      culc.at(r).at(j) += culc.at(i).at(j);
      if (j == c - 1) {
        culc.at(r).at(c) += culc.at(i).at(c);
      }
    }
  }
  for (int i = 0; i < r + 1; i++) {
    for (int j = 0; j < c + 1; j++) {
      cout << culc.at(i).at(j);
      if (j != c) {
        cout << " ";
      }
    }
    cout << nl;
  }
}
