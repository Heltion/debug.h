#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"  // https://github.com/Heltion/debug.h/blob/main/debug.h
#else
#define debug(...) 42
#define debug_assert(...) 42
#endif

int main() {
  debug(vector<int>{});
  debug(1, 1 + 1, 1.0, 1.0 / 2, 'a', "a", "a"s, true);
  debug(vector({3, 1, 4, 1, 5}));
  debug(pair(1, 2.0));
  debug(pair(pair(1, "a"), pair(3, 4 / 2.)));
  debug(tuple(3, 4, 5));
  debug(pair(tuple(3, 2, 4, pair(1, 2)), vector({pair(1, 2), pair(3, 4), pair(5, 6)})));
  debug(vector<bool>{true, false, true});
  debug(bitset<10>(12));
  debug(new int());
  debug(array<int, 4>{1, 2, 3, 4});
}
