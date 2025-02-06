#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main()
{
    FILE *f;
    
    char str[50];

    f = fopen("bt1.txt", "w");
    
    if(f == NULL)
        {
            printf("Khong the mo file bt1.txt!");
            
            exit(1); 
        }

    printf("\nNhap mot chuoi ki tu bat ki: ");

    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
  
    fputs(str, f);   

    printf("\nChuoi ki tu ban vua nhap da duoc ghi vao file 'bt1.txt!'");

    fclose(f);

    printf("\n\n");
    
    return 0;
}