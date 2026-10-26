class Solution {
public:
    int m, n;
    vector<vector<int>> directions = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

    long long DFS(int i, int j, vector<vector<int>>& grid) {
        long long sum = grid[i][j];
        grid[i][j] = 0;

        for(vector<int>&dir : directions) {
            int i1 = i + dir[0];
            int j1 = j + dir[1];

            if(i1 >= 0 && i1 < m && j1 >= 0 && j1 < n && grid[i1][j1] > 0) {
                sum += DFS(i1, j1, grid);
            }
        }

        return sum;
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();

        int count = 0;

        for(int  i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] > 0) {
                    long long sum = DFS(i, j, grid);
                    if(sum % k == 0) count++;
                }
            }
        }

        return count;
    }
};