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

  vi N;
  vvd S;
  while (1) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    N.push_back(n);

    vd s(n);
    for (int i = 0; i < n; i++) {
      cin >> s.at(i);
    }
    S.push_back(s);
  }

  for (int i = 0; i < N.size(); i++) {
    ld ave = 0.0L;
    for (int j = 0; j < N.at(i); j++) {
      ave += S.at(i).at(j);
    }
    ave /= N.at(i);

    ld dis = 0.0L;
    for (int j = 0; j < N.at(i); j++) {
      dis += pow(S.at(i).at(j) - ave, 2);
    }
    dis /= N.at(i);
    ld sdv = sqrt(dis);
    cout << sdv << nl;
  }
}
