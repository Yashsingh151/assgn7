#include<stdio.h>

void printLargestNum(int arr[], int largest, int size) {

    if(size == 0) {
        printf("The largest number in the array is: %d", largest);
        return;
    }

    if(arr[size - 1] > largest) {
        largest = arr[size - 1];
    }

    printLargestNum(arr, largest, size -1);

}

int main() {
    int arr[] = {1,2,3,14,5,6,7,8,9,10};
    int largest = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);

    printLargestNum(arr, largest, size);

    return 0;

}
