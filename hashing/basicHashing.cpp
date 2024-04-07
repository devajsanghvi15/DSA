#include<bits/stdc++.h>
using namespace std;


// for integer hashing using hash array
// int main()
// {
//   int n;
//   cin>>n;
//   int arr[n];

//   for(int i=0;i<n;i++)
//     cin>>arr[i];
  
//   //let max element be 12
//   int hash[13] = {0};
//   for(int i=0;i<n;i++)
//     hash[arr[i]] += 1;

//   int q;
//   cin>>q;

//   while(q--)
//   {
//     int number;
//     cin>>number;
//     cout<<number<<" appears "<<hash[number]<<" times."<<endl;
//   }
// }



// for string hashing using hash array
// int main()
// {
//   int n;
//   cin>>n;
//   string myStr;
//   cin>>myStr;

//   int hash[26] = {0};
//   for(int i=0;i<n;i++)
//     hash[myStr[i] - 'a'] += 1;

//   int q;
//   cin>>q;

//   while(q--)
//   {
//     char ch;
//     cin>>ch;
//     cout<<ch<<" appears "<<hash[ch - 'a']<<" times."<<endl;
//   }
// }



//for int hashing using hash map
// int main()
// {
//   int n;
//   cin>>n;
//   int arr[n];

//   map<int, int> hashMap;
//   for(int i=0;i<n;i++)
//   {
//     cin>>arr[i];
//     hashMap[arr[i]]++;
//   }

//   int q;
//   cin>>q;
//   while(q--)
//   {
//     int number;
//     cin>>number;
//     cout<<number<<" appears "<<hashMap[number]<<" times."<<endl;
//   }
// }






//for string hasing using hash map
int main()
{
  int n;
  cin>>n;
  string myStr;
  cin>>myStr;

  map<char, int> hashMap;
  for(int i=0;i<n;i++)
  {
    hashMap[myStr[i]]++;
  }

  int q;
  cin>>q;
  while(q--)
  {
    char ch;
    cin>>ch;
    cout<<ch<<" appears "<<hashMap[ch]<<" times."<<endl;
  }
}