#include <bits/stdc++.h>
using namespace std;
template <class T> concept printable = requires(ostream& os, T x) { os << x; };
template <class T> concept iterable = ranges::range<T> and not is_same_v<T, string> and not requires() { tuple_size<T>::value; };
template <class T, size_t size = tuple_size<T>::value> string to_debug(T, string s = "");
string to_debug(printable auto x) { return static_cast<ostringstream>(ostringstream() << x).str(); }
string to_debug(iterable auto x, string s = "") {
  for (auto xi : x) { s += ", " + to_debug(xi); }
  return "[" + s.substr(s.empty() ? 0 : 2) + "]";
}
template <class T, size_t size> string to_debug(T t, string s) {
  [&]<size_t... I>(index_sequence<I...>) { ((s += ", " + to_debug(get<I>(t))), ...); }(make_index_sequence<size>());
  return "(" + s.substr(s.empty() ? 0 : 2) + ")";
}
#define debug(...) cerr << __FILE__ ":" << __LINE__ << ": (" #__VA_ARGS__ ") = " << to_debug(tuple(__VA_ARGS__)) << "\n"
