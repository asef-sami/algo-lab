#include<bits/stdc++.h>
using namespace std;

#define loop(i,a,b) for(int i=a;i<b;i++)

const int N = 1e5+2;
bool vis[N];
vector<int> adj[N];

void bfs(int firstnode){
    queue<int> q;
    vis[firstnode]=true;
    q.push(firstnode);

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        cout<<curr<<" ";

        // if(vis[curr]==false){
        //     cout<<curr<<" ";
        //     vis[curr]=true;
        // }

        for(int neighbour : adj[curr]){
            if(!vis[neighbour]){
                vis[neighbour]=true;
                q.push(neighbour);
            }
        }
    }
}

int main(){

    loop(i,0,N){
        vis[i]=false;
    }

    int n,m;
    cin>>n>>m;


    int x,y;

    loop(i,0,m){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    bfs(0);
    return 0;
}