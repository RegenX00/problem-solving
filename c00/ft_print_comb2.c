#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_conv(int nb ) {

    int l_a;
    int l_b;
    if(nb < 10) {

        ft_putchar('0');
        nb = nb + '0';
        ft_putchar(nb);
    } else {

        l_a = (nb / 10) + '0';
        l_b = (nb % 10) + '0';
        ft_putchar(l_a);
        ft_putchar(l_b);
    }
}
void ft_print_comb2(void) {

    int a = 0;
    int b;
    while(a < 99) {

        b = a + 1;
        while(b < 100) {

            ft_conv(a);
            ft_putchar(' ');
            ft_conv(b);
            if(!(a == 98 && b == 99))
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            b++;
        }
        a++;
    }
}
int main()
{
    ft_print_comb2();
    return 0;
}