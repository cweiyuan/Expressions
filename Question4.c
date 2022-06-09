#include <stdio.h>

int main()
{
    int i, j, h, k, l, m, n, o, q, s;
    
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &i);

    j = i % 8;
    h = i / 8;

    k = h%8;
    l = h / 8;

    m = l%8;
    n = l / 8;

    q = n % 8;
    o = n / 8;

    s = o % 8;
     printf("In octal, your number is: %d%d%d%d%d", s, q, m, k, j);
    
    return 0;

}