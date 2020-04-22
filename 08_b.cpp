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

  string x;
  vs data;
  while (1) {
    getline(cin, x);
    if (x == "0") {
      break;
    }
    data.push_back(x);
  }
  for (int i = 0; i < data.size(); i++) {
    int sum = 0;
    for (char j : data.at(i)) {
      sum += (j - '0');
    }
    cout << sum << nl;
  }
}
