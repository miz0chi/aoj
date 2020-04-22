#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  int min = a.at(0);
  int max = a.at(0);
  long long sum = a.at(0);

  for (int i = 1; i < n; i++) {
    if (min > a.at(i)) {
      min = a.at(i);
    }
    if (max < a.at(i)) {
      max = a.at(i);
    }
    sum += a.at(i);
  }

  cout << min << " " << max << " " << sum << endl;
}
