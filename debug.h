#include <bits/stdc++.h>
using namespace std;
template <class T, size_t size = tuple_size<T>::value> string to_string(T);
string to_string(char c) { return "\'"s + c + "\'"; }
string to_string(string s) { return "\"" + s + "\""; }
string to_string(const char* s) { return "\""s + s + "\""; }
string to_string(auto* p) { return to_string(size_t(p)); }
string to_string(bool b) { return b ? "true" : "false"; }
string to_string(ranges::range auto r) {
  string s;
  for (auto x : r) { s += ", " + to_string(x); }
  return "[" + s.substr(s.empty() ? 0 : 2) + "]";
}
template <class T, size_t size> string to_string(T t) {
  string s;
  [&]<size_t... I>(index_sequence<I...>) { ((s += ", " + to_string(get<I>(t))), ...); }(make_index_sequence<size>());
  return "(" + s.substr(s.empty() ? 0 : 2) + ")";
}
#define debug(x...) cerr << __FILE__ ":" << __LINE__ << ": (" #x ") = " << to_string(tuple(x)) << "\n"
