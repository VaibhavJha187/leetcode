class Solution {
    private:
    bool valid(char ch){
      if((ch>= 'a' && ch <= 'z') || (ch>= 'A' && ch <= 'Z') || (ch>= '0' && ch <= '9')){
          return 1;
      }
        return 0;
    }
    
    
    char isLower(char ch){
        if((ch>= 'a' && ch <= 'z')){
            return ch;
        }
        else{
            char temp = ch - 'A' + 'a';
             
            return temp;
            
        }
    }
    
    bool ValidCheck(string a){
        
        int start = 0; 
        
        int end = a.size()-1;
         
       while(start<=end){
            if(a[start] != a[end]){
            return 0 ;
                
            }
        else{
            start ++;
            end --;
          } 
            
       }
        return 1;
    }
    
public:
    bool isPalindrome(string s) {
        
        string temp = "";
        
        //Avoid useless character like (!, @, #, $, %, ^ , & , *, etc)
        
        for(int j = 0; j<s.size(); j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }      
        }
        // Lower case conversion
         
        for(int j = 0 ; j<temp.size(); j++){
            
            temp[j] = isLower(temp[j]);
            
}
        
        
        return (ValidCheck(temp));
        
    }
};