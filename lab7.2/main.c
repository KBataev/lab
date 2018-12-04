#include <stdio.h>
#include <locale.h>

int main()
{
    char str[80];
    char dest[80];
    int i, j;
    
    printf(" ");
    fgets(str, 80, stdin);
    
    for(i = j = 0; str[i] != '\0'; i++)
        if(str[i] != ' ')
            dest[j++] = str[i];
    dest[j] = '\0';
    
    printf(" %s\n", dest);
    return 0;
}
