class Solution {
public:
    int totalMoney(int n) {
        int invest=0;
        int mon =1;

        for(int i =1;i<=n;i++){
            invest = invest + mon;
            mon ++;
            if(i%7==0){
                mon = mon -6;

            }
        }
        return invest;
    }
};