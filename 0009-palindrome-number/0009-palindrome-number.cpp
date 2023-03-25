class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        cout<<s;
        string temp = s;
        
        reverse(s.begin(), s.end());
        return temp == s;
    }
};