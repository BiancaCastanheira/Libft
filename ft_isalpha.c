#include <stdio.h>

int    ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))    {
        return 1;
    } else {
        return 0;
    }
;}



int main()
{
    int c = '+';
    printf("\nIf result = 1 -> your input is an alphabet letter. If result = 0, not a letter!");
    printf("\nResult  : %d", ft_isalpha(c));
    printf("\n");
}
