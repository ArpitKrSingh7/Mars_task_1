#include <stdio.h>

int numofprimefactors(int n)
{
    int i = 2, k = 0;
    int numofprimefactor = 0;
    while (n >= 0 && n != 1)
    {
        while (n % i == 0)
        {
            n = n / i;
            k++;
          
        }

        if (k != 0)
        {
            numofprimefactor++;
            k = 0;
        }

        i++;
    }
    return numofprimefactor;
}

void main()
{
    int j = 2*3*5*7;

    while (1)
    {
        if (numofprimefactors(j) == 4)
        {
            if (numofprimefactors(j + 1) == 4)
            {
                if (numofprimefactors(j + 2) == 4)
                {
                    if (numofprimefactors(j + 3) == 4)
                    {
                        printf("The first of the four consecutive number is %d ", j);
                        break;
                    }
                }
            }
        }

        j++;
    }
}