#include <stdio.h>
void solve(int n)
{
    if (n == 0 || n == 1)
        printf("%d", n) ;
    else 
        {
            solve(n/2);
            printf("%d", n % 2); 
        }
        
}

int main(void)
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    solve(num);
}