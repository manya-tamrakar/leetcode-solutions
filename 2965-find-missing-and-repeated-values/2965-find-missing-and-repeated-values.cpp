class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_map<int,int>map;
        
        int n = grid.size();
        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
            map[grid[i][j]]++;
           }
           }
         int repeated =0;
         int missing =0;
         for(int num =1;num<= n*n;num++){
            if(map[num] == 2){
                repeated = num;
            }
            if(map[num] == 0){
                missing = num;
            }
         }
         ans.push_back(repeated);
         ans.push_back(missing);
         return ans;
    }
};