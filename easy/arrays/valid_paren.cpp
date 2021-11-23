https://leetcode.com/problems/valid-parentheses/


bool isValid(string s) {
        
        // initialisze a stack
        stack<char> st;
        
        // iterate through the string
        for(int i=0; i<s.size(); i++){
            
            // push open paranthesis
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            
            // if closed paranthesis and not empty stack
            else if((s[i] == '}' || s[i] == ']' || s[i] == ')' )&& !st.empty()){
                
                // pop appropriate paranthesis
               if(s[i] == ')'){
                    if(st.top() == '('){
                        st.pop();
                    }
                   else{
                       return false;
                   }
                } 
                else if(s[i] == '}'){
                    if(st.top() == '{'){
                        st.pop();
                    }
                    else{
                       return false;
                   }
                }
                else if(s[i] == ']'){
                    if(st.top() == '['){
                        st.pop();
                    } 
                    else{
                       return false;
                   }
                }
            }
            
            // only closed paranthesis (or) stack empty
            else{
                return false;
            }
        }
        
        // if stack empty it is a valid
        if(st.empty()){
            return true;
        }
        return false;
    }


