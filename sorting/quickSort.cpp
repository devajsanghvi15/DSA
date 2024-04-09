#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n)
{
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int partition(int arr[], int low, int high)
{
  int pivot = arr[low];
  int i = low, j = high;
  while (i < j)
  {
    while (arr[i] <= pivot && i <= high - 1)
      i++;
    while (arr[j] > pivot && j >= low + 1)
      j--;
    if (i < j)
      swap(arr[i], arr[j]);
  }
  swap(arr[low], arr[j]);
  return j;
}

void quickSort(int arr[], int low, int high)
{
  if (low < high)
  {
    int partitionIndex = partition(arr, low, high);
    quickSort(arr, low, partitionIndex - 1);
    quickSort(arr, partitionIndex + 1, high);
  }
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "Before sorting\n";
  display(arr, n);

  quickSort(arr, 0, n - 1);

  cout << "\nAfter sorting\n";
  display(arr, n);
  return 0;
}