// 2018-3-23
//
// Xiaolin Huang
//
//

void bubbleSort(int array[], int num)
{
    int i, j, temp;

    for (i = 0; i < num; i++) {
        for (j = 1; j < num - i; j++ ) {
            if (array[j - 1] > array[j]) {
                temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
            }
        }
    }
}

//improvement
void bubbleSort2(int array[], int num)
{
    bool flag;
    int i, j, temp;

    for (i = 0; i < num; i++) {
        flag = false;
        for (j = 1; j < num - i; j++ ) {
            if (array[j - 1] > array[j]) {
                temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
                flag = true;
            }
        }

        if (!flag) {
            break;
        }
    }
}
