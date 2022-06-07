class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int>> answer(numRows);

        for (int i = 0; i < numRows; i++) {
            answer[i].resize(i + 1);
            answer[i][0] = answer[i][i] = 1;
  
            for (int n = 1; n < i; n++)
                answer[i][n] = answer[i - 1][n - 1] + answer[i - 1][n];
        }
        
        return answer;
    }
};