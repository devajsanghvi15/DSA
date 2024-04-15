#include <bits/stdc++.h>
using namespace std;

void brute(vector<int> &arr, int d) {   //TC => O(n+d)   SC => O(d)
  int n = arr.size();
  d %= n;
  vector<int> temp;

  for(int i=0;i<d;i++)
    temp.push_back(arr[i]);

  for(int i=d;i<n;i++)
    arr[i-d] = arr[i];

  for(int i=n-d;i<n;i++)
    arr[i] = temp[i-(n-d)];
}

void optimal(vector<int> &arr, int d) {      //TC => O(2*n)   SC => O(1)
  int n = arr.size();
  d %= n;
  reverse(arr.begin(), arr.begin()+d);
  reverse(arr.begin()+d, arr.end());
  reverse(arr.begin(), arr.end());
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

  cout << "Before rotating: ";
  for (int num : arr)
    cout << num << " ";

  optimal(arr, 11);

  cout << endl
       << "After rotating: ";
  for (int num : arr)
    cout << num << " ";

  return 0;
}