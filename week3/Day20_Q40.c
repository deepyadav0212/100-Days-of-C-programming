// Write a program to find the 1’s complement of a binary number and print it.
// The program will not give outputs like '0000','000','001'or'0011',etc; as leading zeros are not stored in integer format.

#include <stdio.h>

int main()
{
    int num, remainder, binary = 0, places = 1;

    printf("Enter the number:");
    scanf("%d", &num);

    while (num > 0)
    {
        remainder = num % 2;
        if (remainder == 0)
        {
            remainder = 1;
        }
        else
        {
            remainder = 0;
        }
        binary = binary + (remainder * places);
        places = places * 10;
        num = num / 2;
    }
    printf("%d", binary);
}