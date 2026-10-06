class Solution {
public:
    int countDigits(int num) {
        int ans = 0; 
        int digit = num; 

        while(digit > 0)
        {
            int val = digit % 10;

            if(num % val == 0)
            {
                ans++;
            }

            digit = digit / 10;

        }

        return ans;
        
    }
};