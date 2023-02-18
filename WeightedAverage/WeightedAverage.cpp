// WeightedAverage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
int matrice[10][10];
#include <iostream>
using namespace std;
int main()
{
    cout << "x  " << "y " << "x*y" << endl;

    

    matrice[0][0] = 1;
    matrice[1][0] = 2;
    matrice[2][0] = 3;
    matrice[3][0] = 4;
    matrice[4][0] = 5;
    matrice[0][1] = 6;
    matrice[1][1] = 7;
    matrice[2][1] = 8;
    matrice[3][1] = 9;
    matrice[4][1] = 10;

   
    int k = 0;

    while (k < 5)
    {
        matrice[k][2] = matrice[k][0] * matrice[k][1];
        k++;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrice[i][j] << "  ";
        }
        cout << endl;
    }
    int ww;
    cin >> ww;

}

