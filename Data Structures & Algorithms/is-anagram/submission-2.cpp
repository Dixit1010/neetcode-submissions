class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>count(26,0);
        if(s.size() != t.size())return false;
        for(auto it:s){
            count[it-'a']++;
        }
        for(auto it : t){
            count[it-'a']--;
            if(count[it-'a']<0)return false;
        }
        return true;
    }
};
