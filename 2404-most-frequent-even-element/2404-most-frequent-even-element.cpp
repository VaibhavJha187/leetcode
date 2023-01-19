class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        /*priority_queue<int>q;
        unordered_map<int, int>m;
        m[nums[i]]
        for(int i = 0 ; i<nums.size(); i++){
            if(nums[i]%2==0){
             q.push(nums[i]);
             
             for(int i = 0; i<m;i++){
                 cout<<q.top();
            }
            else{
                return -1;
            }
        }
        }
        return 0;
    }
};*/

std::map<int,int>map;
std::map<int,int>::iterator it;
priority_queue<pair<int,int>>q;
for(int i=0;i<nums.size();i++){
    if(nums[i]%2==0){
        map[nums[i]]++;
    }
}
if(map.empty()){
            return -1;
}
        
for(it=map.begin();it!=map.end();it++){
    q.push({it->second,it->first});
}
    int val=q.top().second;
    int freq=q.top().first;
    q.pop();
    while(!q.empty()){
        if(q.top().second<val and q.top().first==freq){
            val=q.top().second;
            freq=q.top().first;
        }
        q.pop();
    }
        return val;
    }
};




