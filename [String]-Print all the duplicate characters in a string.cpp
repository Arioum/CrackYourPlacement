// https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string

#include <bits/stdc++.h>
using namespace std;

int main() {
  string str = "abcabcd";
  unordered_map<char, int> mpp;

  for (int i = 0; i < str.length(); i++) {
    mpp[str[i]]++;
  }

  for (auto i : mpp) {
    if (i.second > 1) {
      cout << i.first << "-" << i.second << endl;
    }
  }

  return 0;
}