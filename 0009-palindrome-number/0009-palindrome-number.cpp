class Solution {
public:
    bool isPalindrome(int x) {
       long int ans =0;
       int  n = x;
        while(x>0){
          
            int digit = x%10;
            
            ans = (ans*10) + digit;
        
            x = x/10;
        }
        
        if(ans == n)
            return true;
        if(x == -1)
            return false;
        
        else{
            return false;
        }
    }
};