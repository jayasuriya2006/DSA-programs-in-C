#include <stdio.h>

void getSubset(int nums[], int n, int index,
               int current[], int currSize,
               int result[][100], int *resultSize,
               int colSize[]) {

    // base case
    if (index == n) {
        for (int i = 0; i < currSize; i++) {   // only for copying/printing
            result[*resultSize][i] = current[i];
        }
        colSize[*resultSize] = currSize;
        (*resultSize)++;
        return;
    }
    // INCLUDE nums[index]
    current[currSize] = nums[index];
    getSubset(nums, n, index + 1,
              current, currSize + 1,
              result, resultSize, colSize);

    // EXCLUDE nums[index}
    getSubset(nums, n, index + 1,
              current, currSize,
              result, resultSize, colSize);
}
int main() {
    int nums[] = {1, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);
    int result[100][100];
    int colSize[100];
    int resultSize = 0;
    int current[100];
    getSubset(nums, n, 0, current, 0, result, &resultSize, colSize);
    printf("Subsets:\n");
    for (int i = 0; i < resultSize; i++) {
        printf("[ ");
        for (int j = 0; j < colSize[i]; j++) {
            printf("%d ", result[i][j]);
        }
        printf("]\n");
    }
    return 0;
}
