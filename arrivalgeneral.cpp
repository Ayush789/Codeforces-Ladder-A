
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

  int n,k;
  cin>>n;
  int mx = -1,mxp = -1,mn = 10000,mnp = n+1;

  for(int i=0;i<n;i++){
    cin>>k;
    if(k>mx){
      mx = k;
      mxp = i;
    }
    if(k<=mn){
      mn = k;
      mnp = i;
    }
  }
  int sm =0;
  sm += mxp;
  sm += n-mnp-1;

  if(mxp > mnp)sm--;

  //cout<<mx<<" "<<mxp<<" "<<mn<<" "<<mnp;
  cout<<sm;
	return 0;
}
