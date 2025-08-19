#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generatecode(const char *bookname, char *code) {
    FILE *f = fopen("uniqcode.txt", "r+");  
    int lastcode = 1000;   
    
    if (f == NULL) {
        f = fopen("uniqcode.txt", "w+");
        if (f == NULL) {
            printf("File can't be opened...\n");
            exit(1);
        }
    } else {
        fscanf(f, "%d", &lastcode);
    }

    lastcode++;

   rewind(f);  
    fprintf(f, "%d", lastcode);
    fclose(f);

    char initials[4] = {0}; 
    int j = 0;
    for (int i = 0; i < strlen(bookname) && j < 3; i++) {
        if (isalpha(bookname[i])) {
            initials[j++] = toupper(bookname[i]); 
        }
    }

    while (j < 3) {
        initials[j++] = 'X';
    }
    initials[3] = '\0';

    sprintf(code, "%s%d", initials, lastcode);

    printf("Book: %s\nGenerated Code: %s\n", bookname, code);
}