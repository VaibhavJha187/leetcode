class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>mp;
        set<int>s;
for(int i =0; i <arr.size();i++){
        mp[arr[i]]++;
}
        
     unordered_map<int, int>:: iterator it;
     for(it = mp.begin();it!=mp.end();it++){
        s.insert(it->second);}
        if(s.size()==mp.size()){
            return true;}
        else {
            return false;
        }
    }
};