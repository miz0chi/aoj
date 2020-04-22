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

  vs A;
  vvi H;

  while (1) {
    string a;
    cin >> a;
    if (a == "-") {
      break;
    }
    A.push_back(a);

    int m;
    cin >> m;
    vi h;
    for (int i = 0; i < m; i++) {
      int j;
      cin >> j;
      h.push_back(j);
    }
    H.push_back(h);
  }

  for (int i = 0; i < A.size(); i++) {
    for (int j : H.at(i)) {
      // substr(i,j) i~j個選択
      A.at(i) = A.at(i).substr(j, A.at(i).size() - j) + A.at(i).substr(0, j);
    }
    cout << A.at(i) << nl;
  }
}
