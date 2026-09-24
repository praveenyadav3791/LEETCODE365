class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
     int n  = score .size();
     vector<int>idx (n);
     for(int i = 0;i  < n ;i++){
        idx [i] = i;

     }  
     sort(idx.begin(),idx.end(),[&] (int a, int b){
        return score [a] > score[b];

     } );
     vector<string>ans(n);
     for(int rank = 0 ; rank  < n; rank++){
        int originalIndex = idx [rank];

        if(rank == 0 ){
            ans[originalIndex] = "Gold Medal";
        }
        else if(rank == 1){
            ans[originalIndex] = "Silver Medal";
        }
        else if(rank == 2){
            ans[originalIndex] = "Bronze Medal" ;

        }
        else{
            ans[originalIndex] = to_string(rank + 1);

        }
     }
     return ans;
         }
};