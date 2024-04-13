#include <bits/stdc++.h>
using namespace std;

void brute(vector<int> &arr) {    //TC => O(nlogn + n)   SC => O(n)
  set<int> st;
  int n = arr.size();

  for (int i = 0; i < n; i++) // insert elements in set
    st.insert(arr[i]);

  int index = 0;
  for (int it : st)
  { // reinsert elements from set back in array
    arr[index++] = it;
  }
}

void optimal(vector<int> &arr) {      //TC => O(n)   SC => O(1)
  int n = arr.size(), i = 0;
  for(int j=1;j<n;j++) {
    if(arr[j] != arr[i]) {
      arr[i+1] = arr[j];
      i++;
    }
  }
}

int main() {
  vector<int> arr = {1, 1, 2, 2, 2, 3, 3, 5, 6, 7, 7}; // first 6 places should be filled with uniue elements

  cout << "Before removing duplicate elements:" << endl;
  for (int num : arr)
    cout << num << " ";
  optimal(arr);
  cout << endl
       << "Before removing duplicate elements:" << endl;
  for (int num : arr)
    cout << num << " ";

  return 0;
}