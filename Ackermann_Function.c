#include <stdio.h>

int ack(int m, int n);

int main(void)
{
    int i, j;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("Ackermann of (%d,%d) is: %d\n", i, j, ack(i, j));
        }
    }
}

int ack(int m, int n)
{
    if(m == 0)
        return n + 1;
    else if(m > 0 && n == 0)
        return ack(m - 1, 1);
    else
        return ack(m - 1, ack(m, n - 1));
}
