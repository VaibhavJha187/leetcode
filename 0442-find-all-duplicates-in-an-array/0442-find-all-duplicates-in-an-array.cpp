class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> arr;
        unordered_map<int,int>mp;
        for(int i = 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        unordered_map<int,int> :: iterator it;
        for(it= mp.begin(); it!=mp.end(); it++){
        if(it->second==2){
            arr.push_back(it->first);
        }  
        }
        return arr;
    }
};