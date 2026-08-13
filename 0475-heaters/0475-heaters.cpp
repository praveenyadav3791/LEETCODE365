class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
      sort(heaters.begin(),heaters.end());
      int answer = 0;
      for(int house : houses){
        int left =  0;
        int right  = heaters.size() -1;
        while(left  <= right ){
            int mid = left +(right - left )/ 2;
            if(heaters [mid] < house)
                left = mid +1;
            else 
                right = mid -1;

        }
        int rightDistance = INT_MAX;
        int leftDistance = INT_MAX;

        if(left < heaters.size())
            rightDistance = heaters[left] - house;

        if(left > 0)
            leftDistance = house- heaters[left - 1];
        int nearestDistance = min(leftDistance ,rightDistance);
        answer = max(answer,nearestDistance);
      }  
      return answer;
    }
};