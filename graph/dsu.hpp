#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct dsu{
  public:
    dsu() : _n(0) {}
    dsu (int n) :_n(n),_size(n,1),_par(n) {
      for(int _i = 0; _i < _n; _i++){
        _par[_i]=_i;
      }
    }

    int root(int a){
      while(_par[a]!=a){
        a = _par[a] = _par[_par[a]];
      }
      return a;
    }

    bool same(int a,int b){
      return root(a)==root(b);
    }

    int size(int a){
      return _size[root(a)];
    }

    int merge(int a,int b){
      int x = root(a);
      int y = root(b);
      if(x==y)return x;
      if(_size[x]<_size[y])swap(x,y);
      _size[x]+=_size[y];
      _par[y]=x;
      return x;
    }

  private:
    int _n;  
    vector<int> _size;
    vector<int> _par;
};
