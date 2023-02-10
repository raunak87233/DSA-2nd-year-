//https://leetcode.com/problems/as-far-from-land-as-possible/submissions/895242702/




class Solution {
public:
    const int row[4] = {-1, 1, 0, 0};
    const int col[4] = {0, 0, -1, 1};
    
    int maxDistance(vector<vector<int>>& grid) {
        int R = grid.size();
        int C = grid[0].size();
        queue<pair<int, int>> q;
        
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (grid[i][j] == 1) {
                    q.push({i, j});
                    grid[i][j] = 2;
                }
            }
        }
        
        if (q.empty() || q.size() == R * C) return -1;
        
        int dist = 0;
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                auto curr = q.front();
                q.pop();
                
                for (int i = 0; i < 4; i++) {
                    int next_r = curr.first + row[i];
                    int next_c = curr.second + col[i];
                    
                    if (next_r >= 0 && next_c >= 0 && next_r < R && next_c < C) {
                        if (grid[next_r][next_c] == 0) {
                            grid[next_r][next_c] = 2;
                            q.push({next_r, next_c});
                        }
                    }
                }
            }
            dist++;
        }
        
        return dist - 1;
    }
};
