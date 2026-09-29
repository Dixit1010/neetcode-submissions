class Solution {
public:
    bool isPalindrome(string s) {
        string result="";
        for(auto it:s){
            if(it==' ')continue;
            else if(isalnum(it))result+=tolower(it);
        }
        int i=0;
        int j=result.size()-1;
        while(i<j){
            if(result[i++]!=result[j--])return false;
        }
        return true;
    }
};
