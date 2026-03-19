#include <stdio.h>

//~ Decission making
//~ Conditional expression / Ternary


int main()
{
    int X = 10, Z = 12;
    int Y;
    
    if (X == 10)  
        Y = 10; 
    else 
        Y = -1;

    printf("%d\n", Y);
    
    
    Y = (X == 10 && Z >=12) ? 10 : -1; ///conditional expression
    
    printf("%d\n", Y);
    
    
    return 0;
}
