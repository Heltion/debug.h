#include <bits/stdc++.h>
using namespace std;
#include "debug.h"
int main() {
  debug(1, 1 + 1, 1.0, 1.0 / 2, 'a', "a", "a"s, true);
  debug(vector({3, 1, 4, 1, 5}));
  debug(pair(1, 2.0));
  debug(pair(pair(1, "a"), pair(3, 4 / 2.)));
  debug(tuple(3, 4, 5));
  debug(pair(tuple(3, 2, 4, pair(1, 2)),
             vector({pair(1, 2), pair(3, 4), pair(5, 6)})));
}
