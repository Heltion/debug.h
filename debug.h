#include <bits/stdc++.h>
using namespace std;
template <class T, size_t size = tuple_size<T>::value> string to_debug(T, string s = "");
string to_debug(auto x) requires requires(ostream& os) { os << x; } { return static_cast<ostringstream>(ostringstream() << x).str(); }
string to_debug(ranges::range auto x, string s = "") requires(not is_same_v<decltype(x), string> and not requires { tuple_size<decltype(x)>::value; }) {
  for (auto xi : x) { s += ", " + to_debug(xi); }
  return "[" + s.substr(s.empty() ? 0 : 2) + "]";
}
template <class T, size_t size> string to_debug(T x, string s) {
  [&]<size_t... I>(index_sequence<I...>) { ((s += ", " + to_debug(get<I>(x))), ...); }(make_index_sequence<size>());
  return "(" + s.substr(s.empty() ? 0 : 2) + ")";
}
#define debug(...) cerr << __FILE__ ":" << __LINE__ << ": (" #__VA_ARGS__ ") = " << to_debug(tuple(__VA_ARGS__)) << "\n"
