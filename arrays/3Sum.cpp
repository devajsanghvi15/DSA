#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> brute(vector<int> &arr) { // TC => O(n^3)*O(log(no of unique triplets)) ~ O(n^3)   SC => 2*O(no of unique triplets)
  int n = arr.size();
  set<vector<int>> st;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (arr[i] + arr[j] + arr[k] == 0) {
          vector<int> temp = {arr[i], arr[j], arr[k]};
          sort(temp.begin(), temp.end());
          st.insert(temp);
        }
      }
    }
  }
  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}

vector<vector<int>> better(vector<int> &arr) { // TC => O(n^2)*O(logM) ~ O(N^2)   SC => O(N) + 2*O(no of unique triplets)
  int n = arr.size();
  set<vector<int>> st;
  for (int i = 0; i < n; i++) {
    set<int> hashSet; // declare it inside loop as we need empty set after each i iteration
    for (int j = i + 1; j < n; j++) {
      int third = -(arr[i] + arr[j]);
      if (hashSet.find(third) != hashSet.end()) {
        vector<int> temp = {arr[i], arr[j], third};
        sort(temp.begin(), temp.end());
        st.insert(temp);
      }
      hashSet.insert(arr[j]);
    }
  }
  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}

vector<vector<int>> optimal(vector<int> &arr) { // TC => O(nlogn) + O(n^2)   SC => O(no of unique triplets)
  sort(arr.begin(), arr.end());
  int n = arr.size();
  vector<vector<int>> ans;
  for (int i = 0; i < n; i++) {
    if (i > 0 && arr[i] == arr[i - 1]) // As to not take the same element again as i, we can take arr[0] as no prev element
      continue;
    int j = i + 1;
    int k = n - 1;
    while (j < k) {
      int sum = arr[i] + arr[j] + arr[k];
      if (sum < 0)
        j++;
      else if (sum > 0)
        k--;
      else {
        vector<int> temp = {arr[i], arr[j], arr[k]};
        ans.push_back(temp);
        j++;
        k--;
        while (j < k && arr[j] == arr[j - 1])
          j++;
        while (j < k && arr[k] == arr[k + 1])
          k--;
      }
    }
  }
  return ans;
}

int main()
{
  vector<int> arr = {0, 0, -1, -1, 2, -2, 2, 0, -1, 2, 2, -2, -2};
  vector<vector<int>> ans = optimal(arr);

  cout << "Triplets are:" << endl;
  for (int i = 0; i < ans.size(); i++)
  {
    cout << "[";
    for (int j = 0; j < ans[0].size(); j++)
      cout << ans[i][j] << " ";
    cout << "]" << endl;
  }

  return 0;
}