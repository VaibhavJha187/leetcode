class Solution {
public:
    
    void solve(string digits, string output,vector<string>&ans,int index,string map[]){
        
        if(index>=digits.length()){
            
            ans.push_back(output);
            return;
        }
                
        
        int number = digits[index]-'0';
        
        string value =  map[number];
        
        for(int i = 0; i<value.length(); i++){
            
            output.push_back(value[i]);
            
            solve(digits, output, ans, index+1, map);
            
            output.pop_back();
        }
        
    }
    
    
    vector<string> letterCombinations(string digits) {
        
        int index = 0;
        
         vector<string>ans;

        if(digits.length()==0)
            return ans ;
      
        
        string output = "";
        
        string map[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        solve(digits, output, ans, index, map);
        
        
        
        return ans;
        
        
    }
};