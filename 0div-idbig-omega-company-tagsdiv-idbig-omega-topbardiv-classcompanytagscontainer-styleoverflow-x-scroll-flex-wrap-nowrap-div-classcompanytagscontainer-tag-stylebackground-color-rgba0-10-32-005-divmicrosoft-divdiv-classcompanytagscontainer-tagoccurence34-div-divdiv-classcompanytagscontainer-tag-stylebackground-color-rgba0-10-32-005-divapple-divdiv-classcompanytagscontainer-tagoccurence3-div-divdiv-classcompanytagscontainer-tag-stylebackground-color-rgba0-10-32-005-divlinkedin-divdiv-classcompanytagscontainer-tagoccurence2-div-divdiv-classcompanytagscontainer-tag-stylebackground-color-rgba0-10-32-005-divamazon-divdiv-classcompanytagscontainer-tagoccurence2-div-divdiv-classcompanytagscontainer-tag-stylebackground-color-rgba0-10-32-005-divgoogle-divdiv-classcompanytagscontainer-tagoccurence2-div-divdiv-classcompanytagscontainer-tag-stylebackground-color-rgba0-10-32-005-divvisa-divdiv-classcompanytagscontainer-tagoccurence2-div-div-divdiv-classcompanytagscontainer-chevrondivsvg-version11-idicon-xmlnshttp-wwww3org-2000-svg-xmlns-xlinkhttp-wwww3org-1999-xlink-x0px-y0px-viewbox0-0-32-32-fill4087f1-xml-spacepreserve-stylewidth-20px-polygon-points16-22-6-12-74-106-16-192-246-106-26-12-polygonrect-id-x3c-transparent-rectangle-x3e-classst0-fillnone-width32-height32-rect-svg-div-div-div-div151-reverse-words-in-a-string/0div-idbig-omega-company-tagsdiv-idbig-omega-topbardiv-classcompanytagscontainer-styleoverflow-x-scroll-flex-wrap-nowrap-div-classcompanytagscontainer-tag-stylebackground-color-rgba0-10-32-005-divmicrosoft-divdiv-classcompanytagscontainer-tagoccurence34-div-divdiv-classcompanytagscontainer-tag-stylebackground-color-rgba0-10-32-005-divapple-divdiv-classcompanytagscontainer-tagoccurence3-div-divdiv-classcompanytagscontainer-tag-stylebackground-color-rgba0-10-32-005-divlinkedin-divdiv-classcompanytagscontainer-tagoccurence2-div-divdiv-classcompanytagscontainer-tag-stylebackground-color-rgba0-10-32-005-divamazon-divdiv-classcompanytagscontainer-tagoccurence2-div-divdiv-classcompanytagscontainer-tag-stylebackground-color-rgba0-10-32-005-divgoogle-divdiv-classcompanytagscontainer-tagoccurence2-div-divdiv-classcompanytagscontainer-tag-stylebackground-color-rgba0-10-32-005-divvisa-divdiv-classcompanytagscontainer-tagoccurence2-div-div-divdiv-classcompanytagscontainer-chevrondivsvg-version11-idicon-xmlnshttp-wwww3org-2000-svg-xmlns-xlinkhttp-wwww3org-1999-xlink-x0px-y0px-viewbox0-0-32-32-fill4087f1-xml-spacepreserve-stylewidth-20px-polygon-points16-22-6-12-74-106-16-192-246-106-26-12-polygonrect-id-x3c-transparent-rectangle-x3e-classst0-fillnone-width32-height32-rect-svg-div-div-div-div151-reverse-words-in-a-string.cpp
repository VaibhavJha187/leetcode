class Solution {
public:
    
    string reverseWords(string s) {
        string ans = "";
        
        int i = 0;
        while(i<s.length()){
           string temp = "";
        while(s[i] == ' ' && i<s.length()){
            i++;
        }
        
        while(s[i] != ' ' && i<s.length()){
            temp += s[i];
            i++;
        }
        
            if(temp.length()>0){
                
                if(ans.length()==0)
                    ans = temp;
                else{
                    ans = temp+' '+ans;
                }
            }
            
        }
        
        
       return ans; 
    }
};