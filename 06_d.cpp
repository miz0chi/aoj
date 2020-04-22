#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;

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

  int n, m;
  cin >> n >> m;

  vvi A(n, vi(m));
  vi b(m);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> A.at(i).at(j);
    }
  }
  for (int i = 0; i < m; i++) {
    cin >> b.at(i);
  }

  for (int i = 0; i < A.size(); i++) {
    int sum = 0;
    for (int j = 0; j < A.at(i).size(); j++) {
      sum += A.at(i).at(j) * b.at(j);
    }
    cout << sum << nl;
  }
}
