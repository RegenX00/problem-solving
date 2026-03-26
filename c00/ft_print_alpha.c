#include <unistd.h>

void ft_print_alpha(void)
{
    int i = 'a';
    while(i <= 'z')
    {
        write(1, &i, 1);
        i++;
    }
}
int main()
{
    ft_print_alpha();
    return 0;
}