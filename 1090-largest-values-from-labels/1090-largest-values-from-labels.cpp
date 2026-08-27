class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
     int n = values.size();
     vector<pair<int,int>>items;
     
     for(int i = 0; i < n; i++){
         items.push_back({values[i],labels[i]});
     }
     
     sort(items.begin(),items.end(),greater<pair<int,int>>());
       
        unordered_map<int,int>used;
        int ans =0;
        int count = 0;
        
        for(auto[value,label]: items){
            if(count == numWanted)
                break;
            if(used[label] < useLimit){
                ans += value;
                used[label]++;
                count++;
            }
        }
     
     return ans;   
    }
};