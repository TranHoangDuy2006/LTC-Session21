#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main()
{     
    FILE *f = fopen("bt1.txt", "r");
    
    if(f == NULL)
        {
            printf("\nKhong the mo file 'bt1.txt'!");
            
            exit(1);
        }
    
    char str[100];
    
    if(fgets(str, sizeof(str), f) != NULL)
        {
            printf("\nDong dau tien cua file 'bt1.txt' la: %s", str);
        }
        else 
            {
                printf("\nKhong the mo file 'bt1.txt' hoac file 'bt1.txt' dang trong!");
            }

    fclose(f);

    printf("\n\n");

    return 0;

}