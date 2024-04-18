#include <bits/stdc++.h>
using namespace std;

void brute(vector<int> &arr) { // TC => O(2*n)   SC => O(n)
  int n = arr.size();
  vector<int> temp;
  for (int num : arr) {
    if (num != 0)
      temp.push_back(num);
  }
  for (int i = 0; i < temp.size(); i++)
    arr[i] = temp[i];
  for (int i = temp.size(); i < n; i++)
    arr[i] = 0;
}

void optimal(vector<int> &arr) { // TC => O(n)    SC => O(1)
  int n = arr.size(), j = -1;

  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
      j = i;
      break;
    }
  }

  if (j != -1) {
    for (int i = j + 1; i < n; i++) {
      if (arr[i] != 0) {
        swap(arr[i], arr[j]);
        j++;
      }
    }
  }
}

int main() {
  vector<int> arr = {1, 0, 8, 6, 0, 0, 5, 2, 0, 10, 0};

  cout << "Before moving: ";
  for (int num : arr)
    cout << num << " ";

  optimal(arr);

  cout << endl
       << "After moving: ";
  for (int num : arr)
    cout << num << " ";

  return 0;
}