#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main() 
{
    FILE *f;
    
    char input[1000];

    f = fopen("bt1.txt", "a");
    
    if (f == NULL) 
    {
        printf("\nKhong the mo file bt1.txt!");
        
        exit(1);
    }

    printf("\nNhap chuoi ki tu ma ban muon them vao cuoi file 'bt1.txt': ");
    
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    if(fputs(input, f) == EOF) 
    {
        printf("\nLoi khong the ghi vao file bt1.txt!");
        
        fclose(f);
        
        exit(1);
    }

    printf("\nDa ghi chuoi vao cuoi file bt1.txt thanh cong!\n\n");

    fclose(f);

    return 0;
}
