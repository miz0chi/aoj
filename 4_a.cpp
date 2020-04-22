#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  cout << fixed << setprecision(6);
  cout << a / b << " " << a % b << " " << (double)a / (double)b << endl;
}
