/* VLA - Variable length arrays */
#include <stdio.h>
int main()
{
    int size = 15;  //length
    
    char str[size]; //VLA
    
    sprintf(str, "This is test");
    
    puts(str);
        
    return 0;
}
