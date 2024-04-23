#include <bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int> &arr1, vector<int> &arr2) { // TC => O(n1*logn) + O(n2*logn) + O(n1+n2)  SC => 2*O(n1+n2)
  set<int> st;
  for (int num : arr1)
    st.insert(num);
  for (int num : arr2)
    st.insert(num);

  vector<int> ans(st.size(), 0);

  int i = 0;
  for (auto num : st)
    ans[i++] = num;

  return ans;
}

vector<int> optimal(vector<int> &arr1, vector<int> &arr2) { // TC => O(n1+n2)   SC => O(1)
  vector<int> ans;
  int i = 0, j = 0;
  int n1 = arr1.size(), n2 = arr2.size();

  while (i < n1 && j < n2) {
    if (arr1[i] <= arr2[j]) {
      if (ans.size() == 0 || ans.back() != arr1[i])
        ans.push_back(arr1[i]);
      i++;
    }
    else {
      if (ans.size() == 0 || ans.back() != arr2[j])
        ans.push_back(arr2[j]);
      j++;
    }
  }

  while (j < n2) {
    if (ans.size() == 0 || ans.back() != arr2[j])
      ans.push_back(arr2[j]);
    j++;
  }

  while (i < n1) {
    if (ans.size() == 0 || ans.back() != arr1[i])
      ans.push_back(arr1[i]);
    i++;
  }

  return ans;
}

int main()
{
  vector<int> arr1 = {1, 1, 2, 3, 4, 5, 8};
  vector<int> arr2 = {2, 3, 4, 4, 5, 6};
  vector<int> ans = optimal(arr1, arr2);

  cout << "Union of arr1 and arr2 is: \n";
  for (int num : ans)
    cout << num << "\t";
  cout << "\n";

  return 0;
}