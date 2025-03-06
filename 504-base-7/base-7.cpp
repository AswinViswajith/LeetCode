class Solution {
public:
    string convertToBase7(int num) {
        string res="";
        int temp = abs(num);
        if(num == 0)
        {
            return to_string(num);
        }
        while(temp>0)
        {
            res = to_string(temp%7) + res;
            temp/=7;
        }
        if(num < 0)
        {
            res = '-'+res;
        }
        return res;
    }
};