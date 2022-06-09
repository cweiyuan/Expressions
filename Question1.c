#include <stdio.h>

int main()
{
    int i, j, k;
    printf("Enter a two-digit number: ");
    scanf("%d", &i);

    j = i % 10;
    k = i / 10;
    
    printf("The reversal is: %d%d",j, k);

    return 0;
}