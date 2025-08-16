#include <stdlib.h>
#include<stdio.h>
struct info{

  
  char book_name[20];
  char author[25];
  int price;
  char genre[15];
  int stock;
}b;
struct info book();
void writebook( struct info b)  {
FILE*p;
p=fopen("input.txt","a");

if(p == NULL){
    return ;
}


fputs(b.book_name,p);

fputs("  ",p);

fputs(b.author,p);

fprintf(p,"  %d  ",b.price);
fputs(b.genre,p);
fprintf(p,"  %d  ",b.stock);
fputs("\n",p);
fclose(p);

}
void add_book(){
char c='Y';

    while (  c=='Y' || c =='y'){
    struct info b = book();
    writebook(b);
    printf("book entered \n");
    printf("do you wanna add book:");
    scanf(" %c", &c);
    getchar();

    }}


void readbook( ) {
FILE*p1;
p1=fopen("temp.txt","r+");

if(p1 == NULL){
    return ;
}
struct info b;
    printf("\n--- Book Records ---\n");

while (fscanf(p1, "%s", b.book_name) != EOF) {
  

fscanf(p1, "%s", b.author);
fscanf(p1, "%d", &b.price);
fscanf(p1, "%s", b.genre);
fscanf(p1, "%d", &b.stock);


printf("\nBook Name: %s\n", b.book_name);
        printf("Author: %s\n", b.author);
        printf("Price: %d\n", b.price);
        printf("Genre: %s\n", b.genre);
        printf("Stock: %d\n", b.stock);
    }
fclose(p1);


}


