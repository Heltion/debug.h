# debug.h
A short header file for debugging in competitive programming.

It requires c++20.

Possible output for test.cpp:
```
test.cpp:12: (vector<int>{}) = ([])
test.cpp:13: (1, 1 + 1, 1.0, 1.0 / 2, 'a', "a", "a"s, true) = (1, 2, 1, 0.5, a, a, a, 1)
test.cpp:14: (vector({3, 1, 4, 1, 5})) = ([3, 1, 4, 1, 5])
test.cpp:15: (pair(1, 2.0)) = (1, 2)
test.cpp:16: (pair(pair(1, "a"), pair(3, 4 / 2.))) = ((1, a), (3, 2))
test.cpp:17: (tuple(3, 4, 5)) = (3, 4, 5)
test.cpp:18: (pair(tuple(3, 2, 4, pair(1, 2)), vector({pair(1, 2), pair(3, 4), pair(5, 6)}))) = ((3, 2, 4, (1, 2)), [(1, 2), (3, 4), (5, 6)])
test.cpp:19: (vector<bool>{true, false, true}) = ([1, 0, 1])
test.cpp:20: (bitset<10>(12)) = (0000001100)
test.cpp:21: (new int()) = (0x55cef9d5ef50)
test.cpp:22: (array<int, 4>{1, 2, 3, 4}) = ([1, 2, 3, 4])
```
