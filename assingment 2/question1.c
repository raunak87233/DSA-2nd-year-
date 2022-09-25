#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c[50];
	printf("Hello, World!\n");
    scanf("%[^\n]%c",&c);
    printf(c);  
    return 0;
}
