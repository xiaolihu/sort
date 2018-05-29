//2018-3-23
//
//Xiaolin Huang

static void merge(int arr[], int l, int m, int h)
{
    int nLeft = m - l + 1;
    int nRight = h - m;
    int i, j, k;

    int left[nLeft], right[nRight];

    for (i = 0; i < nLeft; i++) {
        left[i] = arr[l + i];
    }
    for (j = 0; j < nReft; j++) {
        right[j] = arr[m + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;

    while (i < nLeft && j < nRight) {
        if (left[i] < right[j]) {
            array[k] = left[i]
                       i++;
        } else {
            array[k] = right[j]
                       j++;
        }
    }

    while (i < nLeft) {
        array[k] = left[i]
                   i++;
        k++;
    }

    while (j < nRight) {
        array[k] = right[j]
                   j++;
        k++;
    }
}

void mergeSort(int array[], int low, int high)
{
    int mid;
    if (low < high) {
        // Divide and Conquer
        mid = (low + high) / 2;
        mergeSort(array, low, mid);
        mergeSort(array, mid + 1, high);
        // Combine
        merge(array, low, mid, high);
    }

    return;
}
