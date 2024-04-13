#include <bits/stdc++.h>
using namespace std;

bool optimal(vector<int> &arr) { // TC => O(n)  SC => O(1)
  int n = arr.size();
  for (int i = 1; i < n; i++)
  {
    if (arr[i] >= arr[i - 1])
      continue;
    return false;
  }
  return true;
}
int main() {
  vector<int> arr = {1, 2, 2, 3, 4, 4};
  optimal(arr) ? cout<<"YES" : cout<<"NO";
  return 0;
}