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

  vvvi count(4, vvi(3, vi(10)));
  int n;
  cin >> n;
  int b, f, r, v;

  for (int i = 0; i < n; i++) {
    cin >> b >> f >> r >> v;
    count.at(b - 1).at(f - 1).at(r - 1) += v;
  }

  for (int i = 0; i < count.size(); i++) {
    for (int j = 0; j < count.at(i).size(); j++) {
      for (int k = 0; k < count.at(i).at(j).size(); k++) {
        cout << " " << count.at(i).at(j).at(k);
      }
      cout << nl;
    }
    if (i != count.size() - 1) {
      cout << "####################" << nl;
    }
  }
}
