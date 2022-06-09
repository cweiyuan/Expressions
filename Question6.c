#include <stdio.h>

int main()
{
    int y, firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit, sixthDigit, seventhDigit, eighthDigit, ninthDigit, tenthDigit, eleventhDigit, tweleveDigit, sum, sum1;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%d", &y);

    firstDigit = y % 10;
    y /= 10;

    secondDigit = y % 10;
    y /= 10;

    thirdDigit = y % 10;
    y /= 10;

    fourthDigit= y % 10;
    y /= 10;

    fifthDigit = y % 10;
    y /= 10;

    sixthDigit = y % 10;
    y /= 10;

    seventhDigit = y % 10;
    y /= 10;

    eighthDigit = y % 10;
    y /= 10;

    ninthDigit = y % 10;
    y /= 10;

    tenthDigit = y % 10;
    y /= 10;

    eleventhDigit = y % 10;
    y /= 10;

    tweleveDigit = y % 10;
    y /= 10;

   

    sum = (eleventhDigit + ninthDigit + seventhDigit + fifthDigit + thirdDigit + firstDigit) * 3;
    sum1 = (tweleveDigit + tenthDigit + eighthDigit + sixthDigit + fourthDigit + secondDigit) + sum;
   
    printf("Check digit: %d", sum1);

    return 0;
}
