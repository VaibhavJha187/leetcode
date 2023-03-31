class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      
        set<int>set1;
        set<int>::iterator it;
        
        for(auto i:nums){
            set1.insert(i);
        }
        
        int i = 0;
        cout<<set1.size();
        
     for(it = set1.begin(); it!=set1.end(); ++it){
            
            nums[i] = *it;
            i++;
        }
        
        //copy(s.begin(),s.end(),nums);
        
        
      
         return set1.size();
        
    }
};