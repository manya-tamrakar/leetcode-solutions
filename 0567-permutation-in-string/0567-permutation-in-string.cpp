class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        unordered_map<char,int>need;
        for(int i=0;i<n;i++){
            need[s1[i]]++;
        }
        int left =0;
        unordered_map<char,int>window;
        for(int right=0;right<m;right++){
           window[s2[right]]++;
           while(right-left+1 >n){
            window[s2[left]]--;
             if(window[s2[left]] == 0){
                    window.erase(s2[left]);
                }
            left++;
           } 
           if(window==need){
            return true;
           }
        }
        return false;
    }
};