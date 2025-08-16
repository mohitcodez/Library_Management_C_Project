#include<stdio.h>
#include<string.h>
struct info{

  
  char book_name[20];
  char author[25];
  int price;
  char genre[15];
  int stock;
}b;


void issue(struct info b){
  FILE  * k;
  k=fopen("input.txt","w");
  if(k==NULL){
    printf("ERROR 404");
    
  }
  else{
   b.stock=b.stock-1;
   
      fputs(b.book_name,k);

      fputs("  ",k);

      fputs(b.author,k);

      fprintf(k,"  %d  ",b.price);
      fputs(b.genre,k);
      fprintf(k,"  %d  ",b.stock);
      fputs("\n",k);


  fclose(k);
  printf("you have successfully issued %s",b.book_name);
}}


