class Solution {
public:
    bool checkIfPangram(string sentence) {
       for(char ch = 'a'; ch <='z'; ch++){
        bool found = false;
        for(char c : sentence){
            if(c== ch){
                found = true;
                break;
            }
        }
        if(!found){
            return false;
        }
       } 
       return true;
    }
};