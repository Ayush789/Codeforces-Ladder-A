#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
typedef long long int ll;
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
  int n,p,q,k;
  cin>>n;
  vi a(n,0);
  cin>>p;
  for(int i=0;i<p;i++){
    cin>>k;
    a[k-1]=1;
  }

  cin>>q;
  for(int i=0;i<q;i++){
    cin>>k;
    a[k-1]=1;
  }


  for(int i=0;i<n;i++){
    //for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
    if(a[i]==0){
      cout<<"Oh, my keyboard!";
      return 0;
    }
  }
  cout<<"I become the guy.";
	return 0;
}
