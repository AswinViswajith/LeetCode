class Solution {
public:
    int fib(int n) {
        if(n<=1)
        {
            return n;
        }
        int first = 0;
        int second = 1;
        int sum = 0;
        
        for(int i=0;i<=n-2;i++)
        {
            sum = first+second;
            first = second;
            second = sum;
        }
        return sum;
    }
};