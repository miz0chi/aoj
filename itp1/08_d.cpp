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

  string s, p;

  getline(cin, s);
  getline(cin, p);
  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < p.size(); j++) {
      int ring = i + j;
      if (ring > s.size() - 1) {
        ring -= s.size();
      }
      if (s.at(ring) != p.at(j)) {
        break;
      }
      // cout << s.at(ring) << ":" << p.at(j) << nl;
      if (j == p.size() - 1) {
        cout << "Yes" << nl;
        return 0;
      }
    }
  }
  cout << "No" << nl;
}
