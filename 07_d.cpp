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

  int n, m, l;
  cin >> n >> m >> l;

  vvi A(n, vi(m));
  vvi B(m, vi(l));
  vvl C(n, vl(l));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> A.at(i).at(j);
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < l; j++) {
      cin >> B.at(i).at(j);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      for (int k = 0; k < m; k++) {
        C.at(i).at(j) += A.at(i).at(k) * B.at(k).at(j);
      }
      cout << C.at(i).at(j);
      if (j != l - 1) {
        cout << " ";
      }
    }
    cout << nl;
  }
}
