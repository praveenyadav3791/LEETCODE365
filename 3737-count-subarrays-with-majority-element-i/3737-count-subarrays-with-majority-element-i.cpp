class Solution {
public:
    struct  Fenwick{
        int  n;
        vector<int>bit;
        Fenwick(int n){
            this ->n = n;
            bit.assign(n+1,0);

        }
        void update(int idx , int val){
            while (idx <= n){
                bit[idx] += val;
                idx += idx & -idx;
            }
        }
        int query(int idx){
            int res = 0;
            while(idx >0){
                res += bit [idx];
                idx -=idx & - idx;

            }
            return res;
        }
    };
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int  n =  nums.size();
        int OFFSET = n+ 2;
        Fenwick ft(2* n+5);
        long long ans = 0;
        int pref = 0;
        ft.update(OFFSET,1);
        for(int x :nums){
            if(x==target){
                pref++;
            }else{
                pref--;
            }ans += ft.query(pref + OFFSET - 1);
            ft.update(pref + OFFSET , 1);

            
            
        }
        return ans;
    }
};