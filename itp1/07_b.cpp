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

  int n, x;
  vi N, X;
  while (1) {
    cin >> n >> x;
    if (n == 0 && x == 0) {
      break;
    }
    N.push_back(n);
    X.push_back(x);
  }

  for (int i = 0; i < N.size(); i++) {
    int sum = 0;
    for (int j = 1; j <= N.at(i) - 2; j++) {
      for (int k = j + 1; k <= N.at(i) - 1; k++) {
        for (int l = k + 1; l <= N.at(i); l++) {
          if (X.at(i) == j + k + l) {
            sum++;
            // cout << j << k << l << nl;
          }
        }
      }
    }
    cout << sum << nl;
  }
}
