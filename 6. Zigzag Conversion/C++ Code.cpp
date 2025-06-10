#include <vector>
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){return s;}
        vector<string> rows(numRows);
        bool goingDown=false;
        int currentRow=0;
        for(char c:s){
            rows[currentRow]+=c;
            if(currentRow==0 || currentRow==numRows-1){
                goingDown=!goingDown;
            }
            currentRow+=goingDown?1:-1;
        }
        string res;
        for(string row:rows){
            res+=row;
        }

    return res;
        

    }
};
