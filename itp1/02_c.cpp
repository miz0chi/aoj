#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b, c;
  cin >> a >> b >> c;

  if (a > b) {
    swap(a, b);
  }
  if (b > c) {
    swap(b, c);
  }
  if (a > b) {
    swap(a, b);
  }

  cout << a << " " << b << " " << c << endl;
}
