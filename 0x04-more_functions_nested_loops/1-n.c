#include <stdio.h>
#include <limits.h>
#include "main.h"
#include <stdio.h>
#include <limits.h>

void print_number(int n)
{
    char c;
    int cnt = 0;
    char lastDigit;
    long reversed;
    
    if (n < 0)
    {
        _putchar('-');
        lastDigit = (char)('0' - (n % 10));
        n /= -10;
    }
    else
    {
        lastDigit = (char)((n % 10) + '0');
        n /= 10;
    }

    reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    cnt++;
    }

    while (reversed > 0)
    {
        c = (char)((reversed % 10) + '0');
        _putchar(c);
        reversed /= 10;
    cnt--;
    }
    while(cnt != 0)
    {
    _putchar(0);
    cnt--;
    }
    putchar(lastDigit);
}
