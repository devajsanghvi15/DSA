#include<bits/stdc++.h>
using namespace std;

int bruteForce(int arr[], int n) {          //sort and return largest  TC => O(nlogn)  SC => O(1)
  sort(arr, arr + n);
  return arr[n-1];
}

int optimal(int arr[], int n) {             //traverse the array  TC => O(n)  SC => O(1)
  int maxElement = arr[0];
  for(int i=1;i<n;i++) {
    if(arr[i] > maxElement)
      maxElement = arr[i];
  }
  return maxElement;
}

int main() {
  int n = 10;
  int arr[n] = {10, 9, 4, 5, 7, 2, 1, 6, 8, 3};
  cout<<optimal(arr, n);
  return 0;
}