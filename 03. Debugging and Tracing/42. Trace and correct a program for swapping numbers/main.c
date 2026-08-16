#include <stdio.h>
int main()
{
    /*
    #include <stdio.h>

    int main()
    {
        int a = 10, b = 20, temp;

        temp = a;
        a = b;
        b = a;

        printf("After swapping:\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);

        return 0;
    }
    */

    int a = 10, b = 20, temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}