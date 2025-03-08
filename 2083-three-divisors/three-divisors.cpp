class Solution {
public:
    bool isThree(int n) {
        int count=2;
        int i=2;
        while(i<=n/2)
        {
            if(n%i==0)
            {
                count+=1;
            }
            i+=1;
        }
        if(count == 3)
        {
            return true;
        }
        return false;
    }
};