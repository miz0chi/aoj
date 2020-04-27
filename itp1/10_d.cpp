#include <bits/stdc++.h>

using namespace std;

#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

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
  vd x(n), y(n), diff(n);
  for (int i = 0; i < n; i++) {
    cin >> x.at(i);
  }
  for (int i = 0; i < n; i++) {
    cin >> y.at(i);
  }
  ld d1 = 0.0L, d2 = 0.0L, d3 = 0.0L, dmax = 0.0L;
  for (int i = 0; i < n; i++) {
    diff.at(i) = fabs(x.at(i) - y.at(i));
    d1 += diff.at(i);
    d2 += pow(diff.at(i), 2);
    d3 += pow(diff.at(i), 3);
    if (dmax < diff.at(i)) {
      dmax = diff.at(i);
    }
  }
  d2 = sqrt(d2);
  d3 = pow(d3, 1.0L / 3.0L);
  cout << d1 << nl;
  cout << d2 << nl;
  cout << d3 << nl;
  cout << dmax << nl;
}
