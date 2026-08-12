class Solution {
public:
    bool isNumber(string s) {
      bool  seenDigit = false;
      bool seenDot = false;
      bool seenExponent = false;
      bool digitAfterExponent = true;

      for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        if(isdigit(ch)){
            seenDigit = true;
            if(seenExponent)
                digitAfterExponent = true;
        }
        else if (ch == '.'){
            if (seenDot || seenExponent)
                return false;
            seenDot = true;
        }
        else if(ch == 'e' || ch == 'E'){
            if(seenExponent || !seenDigit)
                return false;
            seenExponent = true;
            digitAfterExponent = false;
        }
        else if(ch == '+' || ch =='-'){
            if( i !=0 && s[i -1] != 'e' && s[i -1] != 'E'){
                return false;
            }
        }
      
      else {
        return false;
      }
      }
      return seenDigit && digitAfterExponent;

    }
};