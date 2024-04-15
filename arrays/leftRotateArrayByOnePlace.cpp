#include <bits/stdc++.h>
using namespace std;

void optimal(vector<int> &arr) {      //TC => O(n)   SC => O(1)
  int n = arr.size();
  int temp = arr[0];
  for (int i = 1; i < n; i++)
    arr[i - 1] = arr[i];
  arr[n - 1] = temp;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};

  cout << "Before rotating: ";
  for (int num : arr)
    cout << num << " ";

  optimal(arr);

  cout << endl
       << "After rotating: ";
  for (int num : arr)
    cout << num << " ";

  return 0;
}