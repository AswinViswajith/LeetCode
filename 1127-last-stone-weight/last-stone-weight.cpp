class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        while(stones.size() > 1)
        {
            int l1,l2;
            l1 = stones.back();
            stones.pop_back();
            l2 = stones.back();
            stones.pop_back();
            int sum = l1 - l2;
            if(sum > 0)
            {
                stones.push_back(sum);
            }
            sort(stones.begin(),stones.end());
        }
        if(stones.size()==0)
        {
            return 0;
        }
        return stones[0];
    }
};