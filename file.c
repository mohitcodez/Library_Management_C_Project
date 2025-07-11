#include <stdlib.h>
#include<stdio.h>
struct info{

  
  char book_name[20];
  char author[25];
  int price;
  char genre[10];
  int stock;
}b;
struct info book();
void writebook( struct info b)  {
FILE*p;
p=fopen("input.txt","w");

if(p == NULL){
    return ;
}
fputs(b.book_name,p);
fputs(b.author,p);
fprintf(p,"%d",b.price);
fputs(b.genre,p);
fprintf(p,"%d",b.stock);

fclose(p);

}
void add_book(){


    struct info b = book();
    writebook(b);
    printf("book entered \n");
}