#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int target) {       //TC => O(n)   SC => O(1)
  int n = arr.size();
  for(int i=0;i<n;i++) {
    if(arr[i] == target)
      return i;
  }
  return -1;
}

int main() {
  vector<int> arr = {6, 7, 8, 4, 1};
  cout<<binarySearch(arr, 4)<<endl;
  cout<<binarySearch(arr, 88);
  return 0;
}