#include<bits/stdc++.h>

using namespace std;

void printDivisors(int n)
{
  vector<int> v;
  for(int i=1;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
      v.push_back(i);
      if(n/i != i)
        v.push_back(n/i);
    }
  }
  sort(v.begin(), v.end());
  for(auto num: v)
    cout<<num<<" ";
}

void checkPrime(int n)
{
 int count = 0;
  for(int i=1;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
      count++;
      if(n/i != i)
       count++;
    }
  }
  if(count==2)
    cout<<"Prime";
  else
    cout<<"Not Prime";
}

void GCD(int a, int b)
{
  while(a!=0 && b!=0)
  {
    if(a>b) a %= b;
    else b %= a;
  }
  if(a==0) cout<<b;
  else cout<<a;
}

int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int n1,n2;
    cin>>n1>>n2;
    GCD(n1, n2);
    cout<<endl;
  }
  return 0;
}