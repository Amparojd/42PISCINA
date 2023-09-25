



int	ft_atoi(char *str)
{
    int i;
    int num;
    int neg;

    i = 0;
    neg = 1;
    num = 0;
    if (str[i] == '-' || str[i] == '+')
    {
        neg *= -1;
        i++;
    }
    while(str[i] >= 48 && str[i] <= 57)
        {
            num = num * 10 + str[i] - 48;
            i++;
        }
        return (neg * num);
    }
    
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *p = "-123456";
    printf("%d", ft_atoi(p));
    printf("\n");
    printf("%d", atoi(p));
}