#include <stdio.h>

#include <stdlib.h>

int main() 
{   
    FILE *f = fopen("bt1.txt", "r");        
    
    char firstCh;         

    if(f == NULL) 
        {
            printf("Khong the mo file 'bt1.txt'!\n");
            
            exit(1);
        }

    firstCh = fgetc(f);
    
    if(firstCh == EOF) 
        {
            printf("File 'bt1.txt' dang trong!\n");
        } 
            else 
            {
                printf("\nDoc file 'bt1.txt' thanh cong!");
                
                printf("\n\nKi tu dau tien trong file 'bt1.txt' la: %c\n", firstCh);
                
                printf("\n");
            }

    fclose(f);

    return 0;
}
