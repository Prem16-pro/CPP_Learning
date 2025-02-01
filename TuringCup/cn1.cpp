#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

const int MAXN = 1e5 + 5;

vector<int> adj[MAXN];
int dist[MAXN];
int cnt[MAXN];

void bfs(int start, int n) {
    memset(dist, -1, sizeof(dist));
    queue<int> q;
    q.push(start);
    dist[start] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int n, x, y;
        cin >> n >> x >> y;

        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
        }

        for (int i = 1; i < n; ++i) {
            adj[i].push_back(i + 1);
            adj[i + 1].push_back(i);
        }

        adj[x].push_back(y);
        adj[y].push_back(x);

        memset(cnt, 0, sizeof(cnt));

        for (int i = 1; i <= n; ++i) {
            bfs(i, n);
            for (int j = i + 1; j <= n; ++j) {
                cnt[dist[j]]++;
            }
        }

        for (int k = 1; k <= n; ++k) {
            cout << cnt[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}