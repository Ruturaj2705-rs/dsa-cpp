class Solution {
public:
    bool isPalindrome(int x) {
        
        bool isPalindrome = true;
        if(x<0){
            isPalindrome = false;
        }
        long long reverse = 0;
        int original = x;
        while(x>0){
            int digit = x % 10;
            reverse = reverse*10 + digit;
            x /= 10;
        }
        if(original == reverse){
            isPalindrome;
        }else{
            isPalindrome = false;
        }
    return isPalindrome;  
    }
};