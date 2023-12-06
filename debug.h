#include <bits/stdc++.h>
using namespace std;
template <class T1, class T2> string to_string(pair<T1, T2>);
template <class... T> string to_string(tuple<T...>);
string to_string(char c) { return "\'"s + c + "\'"; }
string to_string(string s) { return "\"" + s + "\""; }
string to_string(const char* s) { return "\""s + s + "\""; }
string to_string(bool b) { return b ? "true" : "false"; }
string to_string(ranges::range auto r) {
  string res = "[";
  for (auto x : r) { res += (res.size() == 1 ? "" : ", ") + to_string(x); }
  return res + "]";
}
template <class T1, class T2> string to_string(pair<T1, T2> p) {
  return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}
template <class... T> string to_string(tuple<T...> t) {
  string res = "(";
  [&]<size_t... I>(index_sequence<I...>) {
    (..., (res += (res.size() == 1 ? "" : ", ") + to_string(get<I>(t))));
  }(make_index_sequence<sizeof...(T)>());
  return res + ")";
}
void debug_f() { cerr << ")\n"; }
void debug_f(auto first, auto... append) {
  cerr << to_string(first);
  if (sizeof...(append)) { cerr << ", "; }
  debug_f(append...);
}
#define debug(x...)                                     \
  cerr << __FILE__ ":" << __LINE__ << ": (" #x ") = ("; \
  debug_f(x)
#define debug_assert(a, x...)                                                        \
  if (not(a)) {                                                                      \
    cerr << __FILE__ ":" << __LINE__ << ": Assertion `" #a "` failed. (" #x ") = ("; \
    debug_f(x);                                                                      \
    exit(0);                                                                         \
  }
