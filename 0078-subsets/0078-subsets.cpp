class Solution {
public:
    
     void solve(vector<int> &jums, vector<int>output, vector<vector<int>> &ans, int index ){
         
         if(index>=jums.size()){
             
             ans.push_back(output);
             return;
         }
         
         //exclude
         
         solve(jums,output,ans,index+1);
         
         
         //include
         int element  = jums[index];
         
         output.push_back(element);
         
         solve(jums,output,ans,index+1);
         
         
     }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
         
        vector<int> output;
        
        int index = 0;
        
        solve(nums,output,ans,index);
        
        
        return ans;
        
        
        
    }
};