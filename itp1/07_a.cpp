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

  vs score;
  int m, f, r;
  while (1) {
    cin >> m >> f >> r;
    if (m == -1 && f == -1 && r == -1) {
      break;
    }
    if (m == -1 || f == -1) {
      score.push_back("F");
    } else if (m + f >= 80) {
      score.push_back("A");
    } else if (m + f >= 65) {
      score.push_back("B");
    } else if (m + f >= 50) {
      score.push_back("C");
    } else if (m + f >= 30) {
      if (r >= 50) {
        score.push_back("C");
      } else {
        score.push_back("D");
      }
    } else if (m + f < 30) {
      score.push_back("F");
    } else {
      cout << "error" << nl;
    }
  }

  for (int i = 0; i < score.size(); i++) {
    cout << score.at(i) << nl;
  }
}
