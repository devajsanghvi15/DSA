#include<bits/stdc++.h>

using namespace std;

void pattern1(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
}

void pattern2(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
}

void pattern3(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<j+1<<" ";
    }
    cout<<endl;
  }
}

void pattern4(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<i+1<<" ";
    }
    cout<<endl;
  }
}

void pattern5(int n)
{
  for(int i=n;i>0;i--)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
}

void pattern6(int n)
{
  for(int i=n;i>0;i--)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<j<<" ";
    }
    cout<<endl;
  }
}

void pattern7(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n-i;j++)
    {
      cout<<" ";
    }
    for(int j=1;j<=(i*2)-1;j++)
    {
      cout<<"*";
    }
    for(int j=1;j<=n-i;j++)
    {
      cout<<" ";
    }
    cout<<endl;
  }
}

void pattern8(int n)
{
  for(int i=n;i>0;i--)
  {
    for(int j=1;j<=(n-i);j++)
    {
      cout<<" ";
    }

    for(int j=1;j<=(i*2)-1;j++)
    {
      cout<<"*";
    }

    for(int j=1;j<=(n-i);j++)
    {
      cout<<" ";
    }
    cout<<endl;
  }
}

void pattern9(int n)
{
  pattern7(n);
  pattern8(n);
}

void pattern10(int n)
{
  for(int i=1;i<=(2*n)-1;i++)
  {
    int stars = i;
    if(i > n)
    {
      stars = (2*n) - i;
    }
    for(int j=1;j<=stars;j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
}

void pattern11(int n)
{
  int start = 1;
  for(int i=1;i<=n;i++)
  {
    if(i%2==0)
      start = 0;
    else
      start = 1;
    for(int j=1;j<=i;j++)
    {
      cout<<start<<" ";
      start = 1 - start;
    }
    cout<<endl;
  }
}

void pattern12(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<j;
    }
    for(int j=1;j<=(n-i)*2;j++)
    {
      cout<<" ";
    }
    for(int j=i;j>=1;j--)
    {
      cout<<j;
    }
    cout<<endl;
  }
}

void pattern13(int n)
{
  int value = 1;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<value<<" ";
      value++;
    }
    cout<<endl;
  }
}

void pattern14(int n)
{
  for(int i=1;i<=n;i++)
  {
    char character = 'A';
    for(int j=1;j<=i;j++)
    {
      cout<<character;
      character++;
    }
    cout<<endl;
  }
}

void pattern15(int n)
{
  for(int i=n;i>0;i--)
  {
    char character = 'A';
    for(int j=1;j<=i;j++)
    {
      cout<<character;
      character++;
    }
    cout<<endl;
  }
}

void pattern16(int n)
{
  char character = 'A';
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<character;
    }
    cout<<endl;
    character++;
  }
}

void pattern17(int n)
{
  for(int i=1;i<=n;i++)
  {
    char character = 'A';
    for(int j=1;j<=n-i;j++)
    {
      cout<<" ";
    }
    for(int j=1;j<=(i*2)-1;j++)
    {
      cout<<character;
      if(j>=i)
        character--;
      else
        character++;
    }
    for(int j=1;j<=n-i;j++)
    {
      cout<<" ";
    }
    cout<<endl;
  }
}

void pattern18(int n)
{
  char character = 'A' + n - 1;
  for(int i=1;i<=n;i++)
  {
    character = character - i + 1;
    for(int j=1;j<=i;j++)
    {
      cout<<character;
      character++;
    }
    character = 'A' + n - 1;
    cout<<endl;
  }
}

void pattern19(int n)
{
  for(int i=n;i>0;i--)
  {
    for(int j=1;j<=i;j++)
      cout<<"*";
    for(int j=1;j<=2*(n-i);j++)
      cout<<" ";
    for(int j=1;j<=i;j++)
      cout<<"*";
    cout<<endl;
  }

  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
      cout<<"*";
    for(int j=1;j<=2*(n-i);j++)
      cout<<" ";
    for(int j=1;j<=i;j++)
      cout<<"*";
    cout<<endl;
  }
}

void pattern20(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
      cout<<"*";
    for(int j=1;j<=(n-i)*2;j++)
      cout<<" ";
    for(int j=1;j<=i;j++)
      cout<<"*";
    cout<<endl;
  }

  for(int i=n-1;i>0;i--)
  {
    for(int j=1;j<=i;j++)
      cout<<"*";
    for(int j=1;j<=(n-i)*2;j++)
      cout<<" ";
    for(int j=1;j<=i;j++)
      cout<<"*";
    cout<<endl;
  }
}

void pattern21(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      if(i==1 || i==n || j==1 || j==n)
        cout<<"*";
      else
        cout<<" ";
    }
    cout<<endl;
  }
}

void pattern22(int n)
{
  for(int i=0;i<(2*n)-1;i++)
  {
    for(int j=0;j<(2*n)-1;j++)
    {
      int top = i;
      int left = j;
      int right = (2*n) - 2 - j;
      int bottom = (2*n) - 2 - i;
      cout<<(n - min(min(top, bottom),min(left, right)))<<" ";
    }
    cout<<endl;
  }
}

int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int n;
    cin>>n;
    pattern22(n);
    cout<<endl;
  }
  return 0;
}