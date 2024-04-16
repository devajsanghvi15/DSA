#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> brute(vector<int> &arr, int target) { // TC => O(n^4)  SC => 2*O(no of unique quadruplets)
  int n = arr.size();
  set<vector<int>> st;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        for (int l = k + 1; l < n; l++) {
          long long sum = arr[i] + arr[j];
          sum += arr[k];
          sum += arr[l];
          if (sum == target) {
            vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
            sort(temp.begin(), temp.end());
            st.insert(temp);
          }
        }
      }
    }
  }
  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}

vector<vector<int>> better(vector<int> &arr, int target) { // TC => O(n^3)*O(logM) ~ O(N^3)   SC => O(N) + 2*O(no of unique quadruplets)
  int n = arr.size();
  set<vector<int>> st;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      set<int> hashSet; // declare it inside loop as we need empty set after each j iteration
      for (int k = j + 1; k < n; k++) {
        long long sum = arr[i] + arr[j];
        sum += arr[k];
        long long fourth = target - sum;
        if (hashSet.find(fourth) != hashSet.end()) {
          vector<int> temp = {arr[i], arr[j], arr[k], (int)fourth};
          sort(temp.begin(), temp.end());
          st.insert(temp);
        }
        hashSet.insert(arr[k]);
      }
    }
  }
  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}

vector<vector<int>> optimal(vector<int> &arr, int target) { // TC => O(nlogn) + O(n^3)   SC => O(no of unique quadruplets)
  sort(arr.begin(), arr.end());
  int n = arr.size();
  vector<vector<int>> ans;
  for (int i = 0; i < n; i++) {
    if (i > 0 && arr[i] == arr[i - 1]) // As to not take the same element again as i, we can take arr[0] as no prev element
      continue;
    for (int j = i + 1; j < n; j++) {
      if (j > i + 1 && arr[j] == arr[j - 1])
        continue;
      int k = j + 1;
      int l = n - 1;
      while (k < l) {
        long long sum = arr[i];
        sum += arr[j];
        sum += arr[k];
        sum += arr[l];
        if (sum < target)
          k++;
        else if (sum > target)
          l--;
        else {
          vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
          ans.push_back(temp);
          k++;
          l--;
          while (k < l && arr[k] == arr[k - 1])
            k++;
          while (k < l && arr[l] == arr[l + 1])
            l--;
        }
      }
    }
  }
  return ans;
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 4, 3, 3, 4, 2, 1, 5, 1, 2};
  vector<vector<int>> ans = optimal(arr, 8);

  cout << "Quadruplets are:" << endl;
  for (int i = 0; i < ans.size(); i++)
  {
    cout << "[ ";
    for (int j = 0; j < ans[0].size(); j++)
      cout << ans[i][j] << " ";
    cout << "]" << endl;
  }

  return 0;
}