int    ft_isalnum(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))    {
        return 1;
    }   else if ((c >= 0 && c <= 9)) {
        return 1;
    } else  {
        return 0;
    }
}

#include <stdio.h>
int main()
{
    int c = '&';
    printf("\nIf result = 1 -> your input is an alphanumeric character. If result = 0 -> it`s not!");
    printf("\nResult  : %d", ft_isalnum(c));
    printf("\n");
}