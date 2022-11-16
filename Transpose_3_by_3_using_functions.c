#include <stdio.h>
void transpose_3x3(float mat[3][3]);
int main()
{
  float result = 0;
  float Matrx_A[3][3];
  printf("Define Matrix A\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("Enter a%d%d >> ", i + 1, j + 1);
      scanf("%f", &Matrx_A[i][j]);
    }
  }
  printf("    |a11 a12 a13|   |%6.2f %6.2f %6.2f |\n", Matrx_A[0][0], Matrx_A[0][1], Matrx_A[0][2]);
  printf("A = |a21 a22 a23| = |%6.2f %6.2f %6.2f |\n", Matrx_A[1][0], Matrx_A[1][1], Matrx_A[1][2]);
  printf("    |a31 a32 a33|   |%6.2f %6.2f %6.2f |\n\n\n", Matrx_A[2][0], Matrx_A[2][1], Matrx_A[2][2]);
  printf("Transpose of A\n");
  transpose_3x3(Matrx_A);
  
  return 0;
}
void transpose_3x3(float mat[3][3])
{
  float matTrans[3][3];
  int i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      matTrans[j][i] = mat[i][j];
  }
  printf("     |%6.2f %6.2f %6.2f |\n", matTrans[0][0], matTrans[0][1], matTrans[0][2]);
  printf("At = |%6.2f %6.2f %6.2f |\n", matTrans[1][0], matTrans[1][1], matTrans[1][2]);
  printf("     |%6.2f %6.2f %6.2f |", matTrans[2][0], matTrans[2][1], matTrans[2][2]);
}
