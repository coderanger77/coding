#include<bits/stdc++.h>
using namespace std;

#define MOD 786433
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define vi vector<int> 
#define pii pair<int, int> 
#define ll long long 
#define rep(i, n) for(int i = 0; i < n; i++)
#define repe(i, n) for(int i = 1; i <= n; i++)
#define repre(i, n) for(int i = n; i >= 1; i--)
#define repex(i, n) for(int i = 0; i <= n; i++)
#define inRange(i, l, r) (i >= l && i <= r)

void preCompute() {
    
}
struct edge {
    int n, c;
    edge(int n, int c) : n(n), c(c) {}
    egde() {}
};
egde graph[1000010][2];
void dfs(int v) {
    int nx = (v%n)+1;
    while(nx != e) {
        graph[nx][]
    }
}
int s, e;
int handleCase() {
    int n;
    cin>>n;
    repe(i, n) {
        int c;
        cin>>c;
        int nx = (i%n)+1;
        graph[i][0] = edge(nx, c);
        graph[nx][1] = edge(i, c);
    }
}

void inputTestCases() {
    int k;
    cin>>k;
    preCompute();
    while(k--) {
        cout<<handleCase()<<"\n";
    }
}
int main() {
    inputTestCases();
}
#include<bits/stdc++.h>
using namespace std;

#define MOD 786433
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define vi vector<int> 
#define pii pair<int, int> 
#define ll long long 
#define rep(i, n) for(int i = 0; i < n; i++)
#define repe(i, n) for(int i = 1; i <= n; i++)
#define repre(i, n) for(int i = n; i >= 1; i--)
#define repex(i, n) for(int i = 0; i <= n; i++)
#define inRange(i, l, r) (i >= l && i <= r)

void preCompute() {
    
}

struct result {
  int n;
  vi x;
  result(int n, vi x) : n(n), x(x) {}
};
vector<int> graph[600];
result solve(int m, int x) {
    
}
int handleCase() {
    int n;
    cin>>n;
    repe(i, n) {
        repe(j, n) graph[i].push_back(j);
    }
    int m;
    cin>>m;
    while(m--) {
        int m, x;
        cin>>m>>x;
        
    }
}

void inputTestCases() {
    int k = 1;
    preCompute();
    while(k--) {
        cout<<handleCase()<<"\n";
    }
}
int main() {
    inputTestCases();
}
 
 
