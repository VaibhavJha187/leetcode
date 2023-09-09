class Solution {
public:
    bool isValid(string s) {
        
        stack<char>st;
        
      for(int i = 0; i<s.size(); i++){
          
        char ch = s[i];
        if(ch == '{' || ch== '(' || ch == '[')  {
            st.push(ch);
        }
          else{
              
              if(!st.empty()){
                  if((ch== '}' and st.top() == '{') || (ch == ')' and st.top()== '(') || (ch==']' and st.top()=='[')){
                      st.pop();
                  }
                  else{
                      return 0;
                  }
              }
              else{
                  return false;
              }
          }
          
          
      }
        
        
       if(st.empty())
           return 1;
        else{
            return 0;
        }
        
    }
};