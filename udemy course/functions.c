#include <stdio.h>          /* Functions in C */

void test1(void)
{
    printf("No arguments\n");
}

void test2(float a, float b, float c)
{
    printf("Arguments %f %f %f\n",a,b,c);
}
float test3(void)
{
    return 22.7;
}

int main()
{
    test1();
    test2(1.1, 2.2, 3.3);
    
    float con = test3();
    printf("function return %.2lf\n", con);

    return 0;
}



