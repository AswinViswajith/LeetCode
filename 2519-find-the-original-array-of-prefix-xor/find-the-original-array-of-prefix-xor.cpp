class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        int x_or = pref[0];
        for(int i=1;i<n;i++)
        {
            pref[i] ^= x_or;
            x_or ^= pref[i];
        }
        return pref;
    }
};