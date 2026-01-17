#include<iostream>
using namespace std;

void printPath(char path[][10], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << path[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void f(char maze[][10], char path[][10], int m, int n, int i, int j) {

    // boundary + block + visited check
    if(i < 0 || j < 0 || i >= m || j >= n || maze[i][j] == 'X' || path[i][j] == '1') {
        return;
    }

    // destination reached
    if(i == m - 1 && j == n - 1) {
        path[i][j] = '1';
        printPath(path, m, n);
        path[i][j] = '0';
        return;
    }

    // mark current cell
    path[i][j] = '1';

    // move in all 4 directions
    f(maze, path, m, n, i, j + 1); // right
    f(maze, path, m, n, i + 1, j); // down
    f(maze, path, m, n, i, j - 1); // left
    f(maze, path, m, n, i - 1, j); // up

    // backtrack
    path[i][j] = '0';
}

int main() {

    char maze[][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00"
    };

    char path[][10] = {
        "0000",
        "0000",
        "0000",
        "0000"
    };

    int m = 4, n = 4;

    f(maze, path, m, n, 0, 0);

    return 0;
}
