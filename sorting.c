void SelectionSort(int arr[], int i, int j, int length, int flag)
{
    if (i < length - 1) {
        if (flag)
            j = i + 1;

        if (j < length) {
            if (arr[i] > arr[j]) //proses penyortingan
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
            SelectionSort(arr, i, j + 1, length, 0);
        }
        SelectionSort(arr, i + 1, 0, length, 1);
    }
}

int main()
{
    int arr[] = { 23, 10, 46, 21, 75 };
    int i = 0;

    printf("Array sebelum sorting: \n");
    for (i = 0; i < 5; i++)
        printf("%d  ", arr[i]);

    SelectionSort(arr, 0, 0, 5, 1);

    printf("\nArray sesudah sorting: \n");
    for (i = 0; i < 5; i++)
        printf("%d  ", arr[i]);

    printf("\n");

    return 0;
}
