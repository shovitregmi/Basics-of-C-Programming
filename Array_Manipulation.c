#include <stdio.h>

int main()
{
    int arr[100], i, n, largest, second_largest;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements of the array: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second_largest = arr[1];
    if(second_largest > largest) {
        int temp = largest;
        largest = second_largest;
        second_largest = temp;
    }

    for(i = 2; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }

    printf("Largest element in the array is: %d\n", largest);
    printf("Second largest element in the array is: %d", second_largest);

    return 0;
}

