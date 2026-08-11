class Solution {
  public:
    vector<bool> processQueries(vector<int> &ar, vector<vector<int>> &queries) {
        // code here
        vector<vector<int>> val, peak;
        int n = ar.size();
        //cout<<n<<endl;
        for(int i = 0;i<n;i++){
            if(i-1 >=0 && ar[i-1] > ar[i] && i+1 < n && ar[i+1] > ar[i]){
                val.push_back({i-1, i+1});
                //cout<<"val -- "<<i<<" "<<i-1<<" "<<i+1<<endl;
            }
            
            else if(i-1 >= 0 && ar[i-1] < ar[i] && i+1 < n && ar[i+1] < ar[i]){
                peak.push_back({i-1, i+1});
                //cout<<"peak -- "<<i<<" "<<i-1<<" "<<i+1<<endl;
            }
        }
        vector<bool> anss;
        int c = 0;
        for(const auto& x : queries){
            auto u = x[0];
            auto v = x[1];
            bool ans = true;
            for(const auto & y : val){
                auto lu = y[0];
                auto lv = y[1];
                if(lu >= u && lv <= v){
                    ans = false;
                    break;
                }
            }
            
            if(ans){
                c = 0;
                for(const auto & y : peak){
                    auto lu = y[0];
                    auto lv = y[1];
                    if(lu >= u && lv <= v){
                        c++;
                        if(c > 1){
                            ans = false;
                            break;
                        }
                    }
                }   
            }
            
            anss.push_back(ans);
        }
        
        return anss;
    }
};