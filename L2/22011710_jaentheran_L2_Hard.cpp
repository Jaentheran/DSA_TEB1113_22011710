/*
ID = 22011710
Name = Jaentheran Saravanan
Problem: https://www.geeksforgeeks.org/a-boolean-matrix-question/
*/

#include <iostream>
using namespace std;

int main() {

    int mat[3][4] = {
        {1, 0, 0, 1},
        {0, 0, 1, 0},
        {0, 0, 0, 0}
    };

    bool row[3] = {false};    
    bool column[4] = {false};  

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (mat[i][j] == 1) {
                row[i] = true;
                column[j] = true;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (row[i] || column[j]) {
                mat[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
