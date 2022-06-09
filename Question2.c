#include <stdio.h>

int main()
{
    int j, l, k, n, i;
    printf("Enter a three-digit number: ");
    scanf("%d", &i);

    j = i%100;
    l = j%10;
    k = j/10;

    n = i / 100;

    printf("The reversal is: %d%d%d", l, k, n);
    
    return 0;
}