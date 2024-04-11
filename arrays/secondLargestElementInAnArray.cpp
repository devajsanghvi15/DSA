#include <bits/stdc++.h>
using namespace std;

int bruteForce(vector<int> &arr) { // sort and return second largest  TC => O(nlogn + n)  SC => O(1)
  int n = arr.size(), largest = arr[n - 1], secLargest = -1;
  sort(arr.begin(), arr.end());
  for (int i = n - 2; i >= 0; i--)
  {
    if (arr[i] < largest)
    {
      secLargest = arr[i];
      break;
    }
  }
  return secLargest;
}

int better(vector<int> &arr) {          //TC => O(n + n) = O(2n)  SC => O(1)
  int n = arr.size();
  int largest = arr[0], secLargest = INT_MIN;

  for(int i=1;i<n;i++) {     //find largest
    if(arr[i] > largest)
      largest = arr[i];
  }

  for(int i=0;i<n;i++) {      //find second largest
    if(arr[i] > secLargest && arr[i] != largest)
      secLargest = arr[i];
  }

  return secLargest;
}

int optimal(vector<int> &arr) {        //TC => O(n)  SC => O(1)
  int n = arr.size(), largest = arr[0];
  int slargest = INT_MIN;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > largest)
    {
      slargest = largest;
      largest = arr[i];
    }
    else if (arr[i] < largest && arr[i] > slargest)
      slargest = arr[i];
  }
  return slargest;
}

int main()
{
  vector<int> arr = {1, 2, 4, 42, 86, 33, 455, 455};

  int secondLargest = optimal(arr);
  cout << secondLargest;

  return 0;
}