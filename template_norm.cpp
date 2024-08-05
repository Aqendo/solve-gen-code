#include "bits/stdc++.h"

// Yandex and etc may not support `avx`, so consider using `sse, sse2, sse3,
// sse4, sse4.1, sse4.2` But really use them when there is `pihat'` condition
// #pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")

using namespace std;

#define int int64_t
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#ifdef SEREGA
auto freopen_input_result_ = freopen("../input.txt", "r", stdin);
// auto freopen_output_result_ = freopen("output.txt", "r", stdout);
#else
#pragma GCC optimize("O3")
#define endl '\n'
#endif

void solve() {}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  int t = 1;
  // cin >> t;
  while (t--) solve();
}