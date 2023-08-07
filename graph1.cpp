#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)

const int N=1e5+2, MOD = 1e9+7;

vi adj[N];

// Represtation of graphs

signed main(){
    // n= number of nodes
    // m= number of edges

    int n,m;
    cin>>n>>m;

    vvi adjm(n+1,vi(n+1,0));

    rep(i,0,m){
        int x,y;
        cin>>x>>y;
        adjm[x][y]=1;
        adjm[y][x]=1;
    }

    cout<<"Adjacency matrix of above graph is given by: "<<endl;

    rep(i,1,n+1){
        rep(j,1,n+1){
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }

    if(adjm[3][7]){
        cout<<"There is Edge between 3 & 7"<<endl;
    }
    else{
        cout<<"No edge"<<endl;
    }

    cout<<endl<<endl;

    rep(i,0,m){
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout<<"Adjacency list of the above graph: "<<endl;
    rep(i,1,n+1){
        cout<<i<<" -> ";

        vector<int> :: iterator it;

        for(it=adj[i].begin();it!=adj[i].end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
        // Alternate way ->
        // for(int x: adj[i]){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
    }
    return 0;
}