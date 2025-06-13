/*
ID = 22011710
Name = Jaentheran Saravanan
Problem: https://www.geeksforgeeks.org/rotate-matrix-180-degree/
*/

#include <iostream>
using namespace std;

int main() {
   
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rotated[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rotated[i][j] = mat[2 - i][2 - j];  
        }
    }

    cout << "Matrix after 180-degree rotation:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
