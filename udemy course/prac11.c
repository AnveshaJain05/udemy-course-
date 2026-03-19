#include <stdio.h>

//~ Decission making
//~ switch-case

int main()
{
    int speed;
    
    
    printf("Enter speed:");
    scanf("%d", &speed);
    
    switch (speed)
    {
        case 20: 
            printf("Too slow\n");
            break;
        
        case 50: 
            printf("Fine\n");
            break;
        
        case 100: 
            printf("Good\n");
            break;
        
        case 120: 
            printf("Slow down\n");
            break;
            
        default:
            printf("Invalid speed entered\n");
    }
    
    
    return 0;
}
