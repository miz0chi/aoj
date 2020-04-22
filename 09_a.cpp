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

  string W, t;
  vs T;

  cin >> W;
  while (1) {
    cin >> t;
    if (t == "END_OF_TEXT") {
      break;
    }
    T.push_back(t);
  }

  int sum = 0;
  for (int i = 0; i < T.size(); i++) {
    if (W.size() == T.at(i).size()) {
      for (int j = 0; j < W.size(); j++) {
        char ch = T.at(i).at(j);
        if ('A' <= ch && ch <= 'Z') {
          ch += 32;  //大文字->小文字変換
        }
        if (ch != W.at(j)) {
          break;
        }
        if (j == W.size() - 1) {
          sum++;
        }
      }
    }
  }
  cout << sum << nl;
}
