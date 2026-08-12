class Solution {
public:
     vector<string>result;
      vector<string>mapping = {
        "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
      };
      void backtrack(string &digits,int index,string &current){
        if(index == digits.length()){
            result.push_back(current);
            return;
        }
        string letter = mapping[digits[index] - '0'];
        for(char ch : letter){
            current.push_back(ch);
            backtrack(digits,index +1,current);
            current.pop_back();

        }
      }
      vector<string> letterCombinations(string digits){
          if(digits.empty())
            return{};
        string current = "";
        backtrack(digits,0,current);

        return result;
    }
};