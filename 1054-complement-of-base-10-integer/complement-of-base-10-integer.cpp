class Solution {
public:
    int bitwiseComplement(int n) {
        if (n==0){
            return 1;
        }
            int answer =0;
            int place =1;
            while(n>0){
                int bit = n%2;
                int flippedbit =1-bit;
                answer=answer+(flippedbit*place);
                place = place*2;
                n=n/2;
                
            }
        
        return answer;
        
    }
};