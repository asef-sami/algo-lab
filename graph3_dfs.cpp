#include<bits/stdc++.h>
using namespace std;

#define loop(i,a,b) for(int i=a;i<b;i++)

const int N = 1e5+2;
bool vis[N];
vector<int> adj[N];

void dfs(int node){

    // Pre order
    vis[node]=true;
    cout<<node<<" ";

    // inorder
    // vector<int> :: iterator it;

    // for(it = adj[node].begin(); it != adj[node].end(); it++){
    //     if(vis[*it]){

    //     }
    //     else{
    //         dfs(*it);
    //     }
    // }

    for (int neighbor : adj[node]) {
        if (!vis[neighbor]) {
            dfs(neighbor);
        }
    }

    // postorder

}

int main(){
    int n,m;
    cin>>n>>m;

    int x,y;
    loop(i,0,m){
        cin>>x>>y;

        loop(i,0,n+1){
            vis[i]=false;
        }

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1);

    return 0;
}