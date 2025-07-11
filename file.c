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
fputs("\n",p);
fputs(b.book_name,p);
fputs("  ",p);
fputs(b.author,p);
fprintf(p,"  %d  ",b.price);
fputs(b.genre,p);
fprintf(p,"  %d  ",b.stock);

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

    }
}