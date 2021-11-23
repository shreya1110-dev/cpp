// https://leetcode.com/problems/palindrome-number/submissions/

bool isPalindrome(int x) {
        // negative number is not a palindrome, its a multiple of 10 and not 0
        if(x<0 || (x%10 == 0 && x!=0)){
            return false;
        }
        
        //to hold 32 bit signed
        long int temp = x;
        long int n = 0;
        //reverse number
        while(temp > 0){
            int rem = temp%10;
            n = n*10+rem;
            temp = temp/10;
        }
        //check if reversed number is equal to original
        if(n == x){
            return true;
        }
        else{
            return false;
        }
    }