#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define fix(x) fixed << setprecision(x)
#define eb emplace_back
using namespace std;
using ll = long long;
using ld = long double;
using vl = vector<long long>;
using vvl = vector<vector<long long>>;
using vs = vector<string>;
using pl = pair<long long, long long>;
template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}
template<class T>using rp_queue=priority_queue<T,vector<T>,greater<T>>;
void fast_io(){cin.tie(nullptr);ios_base::sync_with_stdio(false);}
template <typename T> T gcd(T a, T b) {if (b == 0)return a; else return gcd(b, a % b);}
template <typename T> inline T lcm(T a, T b) {return a /gcd(a, b)*b;}
const ll INF = 1LL << 60;
const ld PI = 3.14159265358979323846L;
#include "dsu.cpp"
void solve(){
  
}
int main(){
  fast_io();
  int num_tc = 1;
  //cin >> num_tc;
  rep(tc,num_tc){
    //cout << "Case #" << tc+1 << ": " ;// << endl;
    solve();
  }
}
