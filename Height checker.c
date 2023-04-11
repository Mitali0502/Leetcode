int heightChecker(int* heights, int heightsSize){
    int* expected = (int*) malloc(heightsSize * sizeof(int));
    memcpy(expected, heights, heightsSize * sizeof(int));
    // sort the expected array in non-decreasing order
    for (int i = 0; i < heightsSize - 1; i++) {
        for (int j = i + 1; j < heightsSize; j++) {
            if (expected[i] > expected[j]) {
                int temp = expected[i];
                expected[i] = expected[j];
                expected[j] = temp;
            }
        }
    }
    // compare the two arrays and count the number of indices where the elements are different
    int count = 0;
    for (int i = 0; i < heightsSize; i++) {
        if (heights[i] != expected[i]) {
            count++;
        }
    }
    free(expected);
    return count;
}
