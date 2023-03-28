class Solution {
public:
    string reverseVowels(string s) {
      string str = "";
      set<int>se;
       
      set<int>::iterator it;  
        
        
        for(int i= 0; i<s.size(); i++){
            
            if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u'||s[i]==          'A' || s[i]== 'E' || s[i]== 'I' || s[i]== 'O' || s[i]== 'U' ){
                
                
                str.push_back(s[i]);  
                se.insert(i);
                
                }
            
        }  
      reverse(str.begin(), str.end());
        
        for(it = se.begin(); it!=se.end(); ++it){
            
            
                for(int k = 0; k<str.size(); k++){
                    s[*it] = str[k];
                    *it++;
                }
             break;
             }
            return s;     
            
        }  
        
    };