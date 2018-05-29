//2018-3-23
//
//Xiaolin Huang

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

        array[low] = array[i];
        array[i] = pivot;
    }

    quickSort(array, low, i - 1);
    quickSort(array, i + 1, high);
}
