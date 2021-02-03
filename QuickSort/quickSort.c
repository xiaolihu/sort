//2018-3-23
//
//Xiaolin Huang

// low and high are index of array or devided-array
void quickSort(int array[], int low, int high)
{
    int i, j, pivot;
    int temp;

    if (low > high) {
        return;
    }

    pivot = array[low]; // base number
    i = low;
    j = high;
    while (i != j) {
        while (array[j] >= pivot && i < j) {
            j--;
        }
        while (array[i] <= pivot && i < j) {
            i++;
        }

        if (i < j) {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }

    }
    array[low] = array[i];
    array[i] = pivot;
    // all left smaller than pivot and bigger ones on right

    // Recursively sort sub-array
    quickSort(array, low, i - 1);
    quickSort(array, i + 1, high);
}
