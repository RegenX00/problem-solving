#include <unistd.h>

void ft_rev_alpha(void)
{
    int i = 'z';
    while(i >= 'a')
    {
        write(1, &i, 1);
        i--;
    }
}
int main()
{
    ft_rev_alpha();
    return 0;
}