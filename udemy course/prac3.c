// Additional Assignment operators
#include <stdio.h>
int main()
{
    int x = 10;
    
    x += 1;
    x -= 1;
    x /= 1;
    x *= 1;
    x %= 1;
    
    x = 10;
    
    printf("%d\n", x++);
    
    printf("%d\n", ++x); 
    
    printf("%d\n", x--); 
    
    printf("%d\n", --x); 
        
    x++;
    ++x;
    
    int y = (++x) * 10;
        
    return 0;
}
