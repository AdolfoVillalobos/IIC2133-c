// Matrixes

#pragma once

// Declare a struct
struct matrix;

// Declare an alias as type
typedef struct matrix Matrix;

// Define the matrix struct
struct matrix
{
  // Matrix is an array of arrays
  int **matrix;
  // Rows
  int height;
  // Columns
  int width;
};

// We declare associated functions

// Initializes random matrix
Matrix *matrix_init(int height, int width);
// Transpose matrix
Matrix *matrix_transpose(Matrix *original);
// Prints matrix
void matrix_print(Matrix *mat);
void matrix_destroy(Matrix *mat);
