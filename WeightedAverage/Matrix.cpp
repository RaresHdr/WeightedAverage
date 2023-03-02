//
//
//
////
//#include <iostream>
//using namespace std;
//
//template <typename T>
//T** allocMatrix(int rows,int columns)
//{
// T** mat;
// //pas 1 alocare dinamica - alocam vectorul de vectori
// mat = (T**)malloc(columns * sizeof(T*));
// //mat = new int* [columns];
// //pas 2 alocare dinamica matrice - alocam fiecare vector de inturi
// for (int i = 0; i < columns; i++)
// {
// mat[i] = (T*)malloc(rows * sizeof(T));
// }
//
// return mat;
//}
//
//void populateMatrix(int** mat, int rows, int columns)
//{
// for (int i = 0; i < columns; i++)
// {
// for (int j = 0; j < rows; j++) {
// mat[i][j] = i + j;
// }
// }
//}
//
//
//template <typename T>
//void freeMatrix(T** mat, int rows, int columns)
//{
// for (int i = 0; i < columns; i++)
// {
// free(mat[i]);
// }
//
// free(mat);
//
//}
//
//
//template<typename T>
//void printMatrix(T** mat, int rows, int columns) {
// for (int i = 0; i < columns; i++) {
// for (int j = 0; j < rows; j++) {
// cout << *(*(mat + i) + j) << " ";//<=>mat[i][j]
// }
// cout << endl;
// }
//}
//
//void main()
//{
// int** m = allocMatrix<int>(10,10);
// //double** m = allocMatrix<double>(3, 3);
//
// populateMatrix(m, 10,10);
// printMatrix(m, 10, 10);
//
// freeMatrix(m,10,10);
//}

