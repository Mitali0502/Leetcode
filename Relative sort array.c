#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int cmpfunc(const void *a, const void *b) {
    int ia = *(int *)a;
    int ib = *(int *)b;
    if (ia == ib) {
        return 0;
    } else {
        return ia < ib ? -1 : 1;
    }
}

int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
    // create a map to store the indices of elements in arr2
    int map[1001];
    for (int i = 0; i < 1001; i++) {
        map[i] = -1;
    }
    for (int i = 0; i < arr2Size; i++) {
        map[arr2[i]] = i;
    }

    // sort the elements of arr1 using the indices in arr2
    qsort(arr1, arr1Size, sizeof(int), cmpfunc);

    int i = 0;
    while (i < arr1Size && map[arr1[i]] != -1) {
        i++;
    }
    int j = i;
    while (j < arr1Size) {
        if (map[arr1[j]] == -1) {
            int temp = arr1[j];
            for (int k = j; k > i; k--) {
                arr1[k] = arr1[k - 1];
            }
            arr1[i] = temp;
            i++;
        }
        j++;
    }

    *returnSize = arr1Size;
    return arr1;
}
