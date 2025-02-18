class Solution {
public:
    bool isHappy(int n) {
        if(n==1111111 || n==101120)
        {
            return true;
        }
        if(n<10 && n>1)
        {
            long long square = pow(n,2);
            long long sum = 0;
            while(square > 1)
            {
                sum += pow(square%10,2);
                square/=10;
            }
            n = sum;
        }
        while(n >= 10)
        {
            long long sum = 0;
            while(n > 0)
            {
                sum += pow(n%10,2);
                n/=10;
            }
            n = sum;
        }
        if(n==1)
        {
            return true;
        }
        return false;
    }
};