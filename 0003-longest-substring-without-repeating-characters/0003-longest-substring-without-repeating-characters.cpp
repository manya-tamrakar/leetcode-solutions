class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int count =0;
        unordered_map<char,int>map;
        int left =0;
        int maxlen = 0;
        for(int right=0;right<n;right++){
            map[s[right]]++;
            while(map[s[right]]>1){
                map[s[left]]--;
                left++;
            }
            maxlen = max(maxlen, right - left +1);
        }
        return maxlen;
    }
};