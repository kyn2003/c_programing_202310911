#include <stdio.h>

int main() {
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[6] = {7, 8, 9, 10, 11, 12};
    
    int *p1 = arr1;
    int *p2 = arr2;

    printf("arr1: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr2[i]);
    }
    
    for (int i = 0; i < 6; i++) {
        int temp = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }
    
    printf("\n\nafter swap\n");
    printf("arr1: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
