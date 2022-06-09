#include <stdio.h>

int main()
{
    int y, firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit, sixthDigit, seventhDigit, eighthDigit, ninthDigit, tenthDigit, eleventhDigit, sum, sum1, sum2;
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

   
    /*  1.Add the first, third, fifth, seventh, ninth, and eleventh digits 
        2.Add the second, fourth, sixth, eighth, tenth digits
    */
    sum = (eleventhDigit + ninthDigit + seventhDigit + fifthDigit + thirdDigit + firstDigit);
    sum1 = (tenthDigit + eighthDigit + sixthDigit + fourthDigit + secondDigit);
    sum1 += sum * 3;
    sum1 -= 1;
    sum1 %= 10;
    sum2 = 9 - sum1;
    printf("Check digit: %d", sum2);

    return 0;
}