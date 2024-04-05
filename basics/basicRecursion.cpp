#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n)
{
  if(i>n) return;
  cout<<"Devaj\n";
  printName(i+1, n);
}

void print1ToN(int i, int n)
{
  if(i>n) return;
  cout<<i<<" ";
  print1ToN(i+1, n);
}

void printNTo1(int n)
{
  if(n==0) return;
  cout<<n<<" ";
  printNTo1(n-1);
}

void print1ToNBacktracking(int n)
{
  if(n==0) return;
  print1ToNBacktracking(n-1);
  cout<<n<<" ";
}

void summationParameterised(int i, int sum)
{
  if(i==0)
  {
    cout<<sum;
    return;
  }
  summationParameterised(i-1, sum+i);
}

int summationFunctional(int n)
{
  if(n==0) return 0;
  return (n + summationFunctional(n-1));
}

int factorial(int n)
{
  if(n==0 || n==1) return 1;
  return (n * factorial(n-1));
}

void reverseArray(int a[], int l, int r)
{
  if(l >= r) return;
  int temp = a[l];
  a[l] = a[r];
  a[r] = temp;
  reverseArray(a, l+1, r-1);
}

bool palindrome(int i, string s)
{
  if(i >= s.size()/2) return true;
  if(s[i] != s[s.size()-i-1]) return false;
  return palindrome(i+1, s);
}

int fibonacci(int n)
{
  if(n<=1) return n;
  return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
  int n;
  cin>>n;
  cout<<fibonacci(n);

  // string s = "madam";
  // cout<<palindrome(0, s);

  return 0;
}