
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl "\n"

ll const N = 2e5 + 7;
int spanningTree(int V, vector<pair<int, int>> adj[])
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> vis(V + 1, 0);

    pq.push({0, 0});
    int sum = 0;

    while (!pq.empty())
    {
        pair<int, int> it = pq.top();
        pq.pop();
        int node = it.second;
        int wt = it.first;
        if (!vis[node])
        {
            vis[node] = 1;
            sum += wt;
            for (auto x : adj[node])
            {
                int adjNode = x.first;
                int weight = x.second;
                if (!vis[adjNode])
                {
                    pq.push({weight, adjNode});
                }
            }
        }
    }
    return sum;
}

void caes()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> g[n + 1];
    while (m--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        g[a].emplace_back(make_pair(b, c));
        g[b].emplace_back(make_pair(a, c));
    }
    int sum = spanningTree(n, g);
    cout << sum << endl;
}
void somadhan()
{
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        caes();
    }
}
int main()
{

    somadhan();
    return 0;
}