#include <stdio.h>

int main()
{
    unsigned char cNum = 0;
    int iNum = 0;

    while (iNum <= 256)
    {
        printf("%d %c\n", cNum, iNum);
        iNum = iNum + 1;
        cNum = cNum + 1;
    }
}