/*
Solution for : https://leetcode.com/problems/minimum-path-sum/
*/

int minPathSum(vector<vector<int>>& grid) {
       int minPathSum(vector<vector<int> > &grid) {
        if (grid.empty() || grid[0].empty()) return 0;
        int m = grid.size(), n = grid[0].size();

        vector<int> dp(n + 1, INT_MAX);
        dp[1] = 0;

        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                dp[j + 1] = min(dp[j + 1], dp[j]) + grid[i][j];

        return dp.back();
    }
}
