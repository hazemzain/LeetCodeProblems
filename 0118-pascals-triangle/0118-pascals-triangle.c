/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
   int i, j, **triangle, *columnSizes;
    triangle = malloc(numRows * sizeof(int *));
    columnSizes = malloc(numRows * sizeof(int));
    for (i = 0; i < numRows; ++i) {
        triangle[i] = malloc((i+1) * sizeof(int));
        triangle[i][0] = 1;
        triangle[i][i] = 1;
        columnSizes[i] = i+1;
        if (i > 1) {
            for (j = 1; j < i; ++j) {
                triangle[i][j] = triangle[i-1][j] + triangle[i-1][j-1];
            }
        }
    }
    *returnSize = numRows;
    *returnColumnSizes = columnSizes;
    return triangle;
    
}


    
    
