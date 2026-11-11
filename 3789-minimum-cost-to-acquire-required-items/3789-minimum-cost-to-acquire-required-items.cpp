class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        
        long long ans;
        ans = (1LL*cost1 * need1) + (1LL*cost2 * need2);

        long long maxl = max(need1, need2);
        long long minl = min(need1, need2);

        ans = min(ans, maxl * costBoth);
        ans = min(ans, (minl * costBoth) + (maxl - minl) * (need1 > need2 ? cost1 : cost2));

        return ans;

    }
};