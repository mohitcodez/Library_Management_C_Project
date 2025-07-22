#include<stdio.h>
#include<string.h>
struct info{

  
  char book_name[20];
  char author[25];
  int price;
  char genre[15];
  int stock;
}b;


void search(struct info b, char sn[20]){
FILE*pp;
int n=0;
char o;
pp=fopen("input.txt","r");
if(pp == NULL){
    return ;
}

    printf("\n--- Book Records ---\n");

while (fscanf(pp, "%s", b.book_name) != EOF) {
    if (strcmp(sn,b.book_name)==0){
      fscanf(pp, "%s", b.author);
    fscanf(pp, "%d", &b.price);
    fscanf(pp, "%s", b.genre);
    fscanf(pp, "%d", &b.stock);


        printf("\nBook Name: %s\n", b.book_name);
        printf("Author: %s\n", b.author);
        printf("Price: %d\n", b.price);
        printf("Genre: %s\n", b.genre);
        printf("Stock: %d\n", b.stock);
        n=n+1;
        

break;

    }
    




}
if(n==0){
        printf(" no book found\n");
    }
fclose(pp);
}
void callsearch(){

    char sn[20];
    getchar();
    printf("enter book name:");
    gets(sn);
    
    search(b,sn);

}