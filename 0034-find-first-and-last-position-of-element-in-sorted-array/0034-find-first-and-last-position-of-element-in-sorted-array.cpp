class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> v;
        int s = 0, e = nums.size() - 1;
        int ans1 = -1;
        int ans2 = -1;
        int mid = s + (e-s)/2;
        
        while(s<=e){
        if(nums[mid] == target){
            ans1= mid;
            e = mid-1;
        }
        else if(target>nums[mid]){
            s= mid+1;
        }
        else{
            e = mid-1;
        }
         mid = s + (e-s)/2;
        }
        v.push_back(ans1);
        s=0;
        e=nums.size()-1;
        
        while(s<=e){
         mid = s + (e-s)/2;
        if(nums[mid] == target){
            ans2 = mid;
            s = mid+1;
        }
        else if(target>nums[mid]){
            s= mid+1;
        }
        else{
            e = mid-1;
        }
        }
        v.push_back(ans2);
        return v;
         }

};