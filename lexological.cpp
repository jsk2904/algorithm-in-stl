#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
      string s ;
      cin>>s;
      sort(s.begin(),s.end());         ///sorting string in lexological order so we get all permutation from lower to greater
      cout<<s<<" ";                    /// next_permutation for generating all permutation
      while(next_permutation(s.begin() , s.end()))
      {
       cout<<s<<" ";
      }
      cout<<endl;
    }
}
