#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int S;
  cin >> S;
  int h = S / 3600;
  int m = S % 3600 / 60;
  int s = S % 3600 % 60;

  cout << h << ":" << m << ":" << s << endl;
}
