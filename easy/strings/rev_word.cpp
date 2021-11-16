// https://leetcode.com/problems/reverse-words-in-a-string-iii/

string reverseWords(string s) {
        
        //keep track of start of every word
        int startofword = 0;
        int i = 0;
        
        //iterate through the string
        for(i = 0; i < s.size(); i++){
            
            //if end of word, make note in i
            if(s[i] == ' '){
                
                //reverse from start of word to end
                reverse(s.begin()+startofword, s.begin()+i);
                //change start to end of previous word + 1
                startofword = i + 1;
            }
        }
        //reverse the last word
        reverse(s.begin()+startofword, s.begin()+i);
        return s;
    }
