#include "s21_matrix.h"

int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  int res = 0;
  if (working_matrix(A)) {
    if (!s21_create_matrix(A->rows, A->columns, result)) {
      for (int i = 0; i < result->rows; i++) {
        for (int j = 0; j < result->columns; j++) {
          result->matrix[i][j] = A->matrix[i][j] * number;
        }
      }
    } else {
      res = 1;
    }

  } else {
    res = 1;
  }
  return res;
}