#include <unistd.h>

char put_str(char *str)
{
    int i;

    i = 0;
    while(i[str] != '\0')
    {
        write(1, &i[str], 1);
        str++;
    }
    return(i);
}

int main(void)
{
    char *p;

    p = "Javier siempre tiene razón";
    put_str(p);
}