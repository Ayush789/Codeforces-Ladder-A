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
	int x1,x2,y1,y2;
  cin>>x1>>y1>>x2>>y2;

  if(x1==x2){
    int d = abs(y1-y2);
    cout<<x1+d<<" "<<y1<<" "<<x2+d<<" "<<y2;
  }

  else if(y1==y2){
      int d = abs(x1-x2);
      cout<<x1<<" "<<y1+d<<" "<<x2<<" "<<y2+d;
    }
  else if(abs(x1-x2)==abs(y1-y2)){
    cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
  }else{
    cout<<-1;
  }
	return 0;
}
