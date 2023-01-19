class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        set<int>s;
        for(int i = 0; i<nums1.size();i++){
           s.insert(nums1[i]);
}
        set<int>q;
          for(int j = 0; j<nums2.size();j++){
           q.insert(nums2[j]);
}
        set<int>::iterator it;
        for(it=s.begin();it!=s.end();it++){
            if(q.find(*it)!=q.end()){
                v.push_back(*it);
            }
        }
      return v;  
    }
};