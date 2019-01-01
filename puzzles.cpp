#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
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
	int n,m,mn=10000;
  cin>>n>>m;
  vi a(m);
  for(int i=0;i<m;i++){
    cin>>a[i];
  }

  sort(all(a));
  //for(int i=0;i<m;i++)cout<<a[i]<<" ";cout<< '\n';
  for(int i=0;i<m-n+1;i++){
    //cout<<a[i]<<" "<<a[i+n-1]<<endl;
    mn = min(mn,a[i+n-1]-a[i]);
  }
  cout<<mn;
	return 0;
}
