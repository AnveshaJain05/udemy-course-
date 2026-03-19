#include <stdio.h>
#include <string.h>

//~ Program commandline arguments
int main(int argc, char **argv)
{

    for (int i=1; i<argc; i++)
        puts(argv[i]);
    
    return 0;
}
