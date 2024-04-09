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

void insertionSort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      swap(arr[j - 1], arr[j]);
      j--;
    }
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

  insertionSort(arr, n);

  cout << "\nAfter sorting\n";
  display(arr, n);
  return 0;
}