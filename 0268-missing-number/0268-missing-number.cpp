class Solution {
public:
    int missingNumber(vector<int>& nums) {
       /* if(nums.size()==1 and nums[0]==1){
            return 0;
        }
        else if (nums.size()==1 and nums[0]==0){
            return 1;
        }
        
        
        sort(nums.begin(), nums.end());
        
        int s = 0;
        int e = nums.size()-1;
        
        int mid = s +(e-s)/2;
        
        
        while(s<=e){
            
        if(nums[mid+1] - nums[mid]== 1){
               s= mid+1;
            }
    
        else if(nums[mid+1] - nums[mid] ==2){
            return nums[mid]+1;
        }
        
        else if(nums[mid] - nums[mid-1] ==2){
            return nums[mid]-1;
        }
            mid = s+(e-s)/2;
            
            if(s ==e){
                return nums[mid]+1;
            }
            
    }
        
    
        
        
        s = 0; 
        e = nums.size()-1;
        
         while(s<e){
            
           if(nums[mid]- nums[mid-1] == 1){
            e = mid-1;
         }
    
        else if(nums[mid+1] - nums[mid] ==2){
            return nums[mid]+1;
        }
        
        else if(nums[mid] - nums[mid-1] ==2){
            return nums[mid]-1;
        }
          mid = s+(e-s)/2;
    }
        return -1;
    }*/
        set<int>set1;
        for(int i=0;i<nums.size();i++){
           set1.insert(nums[i]);
        }
        
        for(int i=0;i<=nums.size();i++){
            if(set1.find(i)==set1.end()){
                return i;
            }
        }
        return -1;
    }
        
};