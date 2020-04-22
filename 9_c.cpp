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

  int n;
  cin >> n;
  vs taro(n), hanako(n);

  int tp = 0, hp = 0;
  for (int i = 0; i < n; i++) {
    string t, h;
    cin >> t >> h;
    if (t > h) {
      tp += 3;
    } else if (t < h) {
      hp += 3;
    } else {
      tp++;
      hp++;
    }
  }
  cout << tp << " " << hp << nl;
}
