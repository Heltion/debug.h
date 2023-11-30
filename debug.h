#include <bits/stdc++.h>
using namespace std;
template <class T1, class T2> string serialize(pair<T1, T2>);
template <class... T> string serialize(tuple<T...>);
string serialize(char c) { return "\'"s + c + "\'"; }
string serialize(string s) { return "\"" + s + "\""; }
string serialize(const char* s) { return "\""s + s + "\""; }
string serialize(bool b) { return b ? "true" : "false"; }
string serialize(auto x) { return to_string(x); }
string serialize(ranges::range auto r) {
  string res;
  for (auto x : r) { res += (res.empty() ? "[" : ", ") + serialize(x); }
  return res + "]";
}
template <class T1, class T2> string serialize(pair<T1, T2> p) {
  return "(" + serialize(p.first) + ", " + serialize(p.second) + ")";
}
template <class... T> string serialize(tuple<T...> t) {
  string res;
  [&]<size_t... I>(index_sequence<I...>) {
    (..., (res += (res.empty() ? "(" : ", ") + serialize(get<I>(t))));
  }(make_index_sequence<sizeof...(T)>());
  return res + ")";
}
void debug_f() { cerr << ")\n"; }
void debug_f(auto first, auto... append) {
  cerr << serialize(first);
  if (sizeof...(append)) { cerr << ", "; }
  debug_f(append...);
}
#define debug(x...)                                     \
  cerr << __FILE__ ":" << __LINE__ << ": (" #x ") = ("; \
  debug_f(x)
#define debug_assert(a, x...)                            \
  if (not(a)) {                                          \
    cerr << __FILE__ ":" << __LINE__                     \
         << ": Assertion `" #a "` failed. (" #x ") = ("; \
    debug_f(x);                                          \
    exit(0);                                             \
  }
