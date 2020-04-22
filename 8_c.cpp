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

  vi count(26);
  char i;
  while (cin >> i) {  // eof(ctrl+d)までループ
    if ('A' <= i && i <= 'Z') {
      i += 32;  //大文字->小文字変換
    }
    if ('a' <= i && i <= 'z') {
      count.at(i - 'a')++;  // a~z->0~25
    }
  }
  for (int i = 0; i < 26; i++) {
    cout << (char)(i + 'a') << " : " << count.at(i) << nl;
  }
}
