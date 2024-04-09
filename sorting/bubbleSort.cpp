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

void bubbleSort(int arr[], int n)
{
  int flag = 0;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        flag = 1;
      }
    }
    if (!flag)
      break;
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

  bubbleSort(arr, n);

  cout << "\nAfter sorting\n";
  display(arr, n);
  return 0;
}