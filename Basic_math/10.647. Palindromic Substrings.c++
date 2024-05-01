class Solution {

    public:
    bool isPalindrom(string s , int start , int end){
        while(start<end){
            if(s[start]!=s[end])
            return false ;
            start++,end--;
        }
        return true ; 
    }
public:
    int countSubstrings(string s) {
        int n = s.length() , ans = 0 ; 
        for(int i = 0 ; i<n ; i++){
            for(int j = i ; j<n ; j++  ){
                if(isPalindrom(s,i,j))
                ans = ans + 1 ; 

            }
        }
        return ans ;
        
    }
};