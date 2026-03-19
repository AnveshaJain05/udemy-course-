#include <stdio.h>

// Enum data type in C

typedef enum { mon=1, tue=10, wed=123, thu=77, fri=20, sat=12, sun=999, xyz } DOW;

int main()
{
    
    DOW myvar;

    myvar = sun;
    
    printf("%d", myvar);
    
        
    return 0;
}
