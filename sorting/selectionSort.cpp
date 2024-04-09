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

void selectionSort(int arr[], int n)
{
  for (int i = 0; i <= n - 2; i++)
  {
    int minIndex = i;
    for (int j = i; j <= n - 1; j++)
    {
      if (arr[j] < arr[minIndex])
        minIndex = j;
    }
    swap(arr[minIndex], arr[i]);
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

  selectionSort(arr, n);

  cout << "\nAfter sorting\n";
  display(arr, n);
  return 0;
}