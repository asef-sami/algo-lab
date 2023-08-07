#include<bits/stdc++.h>
using namespace std;

#define loop(i,a,b) for(int i=a;i<b;i++)

const int N = 1e5+2;
bool vis[N];
vector<int> adj[N];

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

    queue<int> q;
    q.push(1);
    vis[1]=true;

    while(!q.empty()){
        int node = q.front();

        q.pop();
        cout<<node<<endl;

        vector<int> :: iterator it;

        for(it = adj[node].begin(); it != adj[node].end(); it++){

            if(!vis[*it]){
                vis[*it] = true;
                q.push(*it);
            }
        }
    }
    return 0;
}