#include <stdio.h>

int main(void)
{
    int arr[5];
    int odd[5], even[5];
    int oddCount = 0, evenCount = 0;

    printf("Please input five integers: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int j=0; j<5; j++)
    {
        if (arr[j] % 2 == 0)
        {
            even[evenCount] = arr[j];
            evenCount++;
        }
        else
        {
            odd[oddCount] = arr[j];
            oddCount++;
        }
    }

    printf("Odd numbers: ");
    for (int k=0; k<oddCount; k++)
    {
        printf("%d ", odd[k]);
    }
    printf("\n");

    printf("Even numbers: ");
    for (int k=0; k<evenCount; k++)
    {
        printf("%d ", even[k]);
    }
    printf("\n");

    return 0;
}
