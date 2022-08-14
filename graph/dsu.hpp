#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct dsu{
  public:
    dsu() : _N(0) {}
    dsu (int N) :_N(N),_data(N,-1) {}

    int root(int a){
      if(_data[a]<0) return a;
      return _data[a] = root(_data[a]);
    }

    bool same(int a,int b){
      return root(a) == root(b);
    }

    int size(int a){
      return -_data[root(a)];
    }

    int merge(int a,int b){
      int x = root(a);
      int y = root(b);
      if(x == y)return x;
      if(_data[x] > _data[y]) swap(x,y);
      _data[x] += _data[y];
      _data[y] = x;
      return x;
    }
  private:
    int _N;  
    vector<int> _data;
};
