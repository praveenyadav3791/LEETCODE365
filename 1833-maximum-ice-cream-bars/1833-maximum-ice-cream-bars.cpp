class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
       sort( costs.begin(),costs.end());
       int icecream = 0;
        for( int cost : costs){
            if(coins >= cost){
                coins -= cost;
                icecream++;
            }else{
                break;
            }
        }
        return icecream; 
    }
};