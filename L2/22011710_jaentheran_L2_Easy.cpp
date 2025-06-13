/*
ID = 22011710
Name = Jaentheran Saravanan
Problem: https://www.geeksforgeeks.org/c-program-multiply-two-matrices/
*/

#include <iostream>
using namespace std;

int main() {
  
    int rows1 = 2, columns1 = 2;
    int rows2 = 2, columns2 = 2;

    int m1[2][2] = {
        {1, 1},
        {2, 2}
    };

    int m2[2][2] = {
        {1, 1},
        {2, 2}
    };

    int result[2][2] = {0};

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            for (int k = 0; k < columns1; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    cout << "Multiplication of given two matrices is:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

