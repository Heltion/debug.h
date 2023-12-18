#include <bits/stdc++.h>
using namespace std;
template <class T> concept printable = requires(ostream& os, T t) { os << t; } and not is_same_v<T, string>;
template <class T, size_t size = tuple_size<T>::value> string to_debug(T);
string to_debug(printable auto t) {
  ostringstream oss;
  oss << t;
  return oss.str();
}
string to_debug(ranges::range auto r) {
  string s;
  for (auto x : r) { s += ", " + to_debug(x); }
  return "[" + s.substr(s.empty() ? 0 : 2) + "]";
}
template <class T, size_t size> string to_debug(T t) {
  string s;
  [&]<size_t... I>(index_sequence<I...>) { ((s += ", " + to_debug(get<I>(t))), ...); }(make_index_sequence<size>());
  return "(" + s.substr(s.empty() ? 0 : 2) + ")";
}
#define debug(x...) cerr << __FILE__ ":" << __LINE__ << ": (" #x ") = " << to_debug(tuple(x)) << "\n"
