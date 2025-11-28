#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};

bool isValid(int x, int y, int n, int m) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

bool isGreaterThanNeighbors(const vector<vector<int>>& matrix, int i, int j) {
    int n = matrix.size();
    int m = matrix[0].size();
    int val = matrix[i][j];
    for (int k = 0; k < 4; ++k) {
        int ni = i + dx[k], nj = j + dy[k];
        if (isValid(ni, nj, n, m) && matrix[ni][nj] >= val) {
            return false;
        }
    }
    return true;
}

void stabilizeMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    while (true) {
        int best_i = -1, best_j = -1;

        // Find the best cell to decrement
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (isGreaterThanNeighbors(matrix, i, j)) {
                    if (best_i == -1 || matrix[i][j] > matrix[best_i][best_j] ||
                        (matrix[i][j] == matrix[best_i][best_j] && (i < best_i || (i == best_i && j < best_j)))) {
                        best_i = i;
                        best_j = j;
                    }
                }
            }
        }

        // If no valid cell is found, break the loop
        if (best_i == -1) {
            break;
        }

        // Decrement the value of the selected cell
        matrix[best_i][best_j]--;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }

        stabilizeMatrix(matrix);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << matrix[i][j] << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}

