https://leetcode.com/problems/length-of-last-word/

int lengthOfLastWord(string s) {
        // pointer to last letter of the string
        int i = s.length()-1; 
        
        // to keep count of the last word of the string
        int cnt = 0; 
        
        // while there are no blank spaces in the end of the word, decrement last letter of the string
        while(s[i] == ' ') {
            i--;
        }
        
        // count characters till next blank
        do{
            i--; 
            cnt++; 
        }   while(i >= 0 && s[i] != ' ');
        
        // return count
        return cnt;
}