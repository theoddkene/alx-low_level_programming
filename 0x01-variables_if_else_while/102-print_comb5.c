#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
        int n, m;
        for (n = 48; n <= 56; n++)
        {
                for (m = 49; m <= 57; m++)
                {
                        if (m > n)
                        {
                                putchar(n);
                                putchar(m);
                                if (n != 56 || m != 57)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                }
        }
        putchar('\n');
        return (0);
}
101-print_comb4.c
#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n, m, l;
        for (n = 48; n < 58; n++)
        {
                for (m = 49; m < 58; m++)
                {
                        for (l = 50; l < 58; l++)
                        {
                                if (l > m && m > n)
                                {
                                        putchar(n);
                                        putchar(m);
                                        putchar(l);
                                        if (n != 55 || m != 56)
                                        {
                                                putchar(',');
                                                putchar(' ');
                                        }
                                }
                        }
                }
        }
        putchar('\n');
        return (0);
}
102-print_comb5.c
#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i, j;
        for (i = 0; i < 100; i++)
        {
                for (j = 0; j < 100; j++)
                {
                        if (i < j)
                        {
                                putchar((i / 10) + 48);
                                putchar((i % 10) + 48);
                                putchar(' ');
                                putchar((j / 10) + 48);
                                putchar((j % 10) + 48);
                                if (i != 98 || j != 99)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                }
        }
        putchar('\n');
        return (0);
}
