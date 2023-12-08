#include <bits/stdc++.h>
using namespace std;
template <class T, size_t size = tuple_size<T>::value> string to_string(T);
string to_string(char c) { return "\'"s + c + "\'"; }
string to_string(string s) { return "\"" + s + "\""; }
string to_string(const char* s) { return "\""s + s + "\""; }
string to_string(bool b) { return b ? "true" : "false"; }
string to_string(ranges::range auto r) {
  string s;
  for (auto x : r) { s += ", " + to_string(x); }
  return "[" + s.substr(min(2, (int)s.size())) + "]";
}
template <class T, size_t size> string to_string(T t) {
  string s;
  [&]<size_t... I>(index_sequence<I...>) { ((s += ", " + to_string(get<I>(t))), ...); }(make_index_sequence<size>());
  return "(" + s.substr(min(2, (int)s.size())) + ")";
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
