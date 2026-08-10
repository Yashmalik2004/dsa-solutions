class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto& i:edges){
            int u = i[0];
            int v = i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>vis(n,0);
        int c=0;
        for(int i=0;i<n;i++){
            if(vis[i]) continue;
            queue<int>q;
            q.push(i);
            vis[i]=1;
            int nodes=0;
            int edgeCount=0;
            while(!q.empty()){
                int u=q.front();
                q.pop();
                nodes++;
                edgeCount+=adj[u].size();
                for(int v:adj[u]){
                    if(!vis[v]){
                        vis[v]=1;
                        q.push(v);
                    }
                }
            }
            edgeCount/=2;
            if(edgeCount==nodes*(nodes-1)/2) c++;
        }
        return c;
    }
};