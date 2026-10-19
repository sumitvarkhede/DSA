class Solution {
public:
    int countDigits(int num) {
        int count =0;
        int ans = num;
        int val =0;
        while(ans !=0){
            val = ans%10;
            if(num %val==0){
                count++;
            
        }


ans = ans/10;
        }
return count;
        
    }
};