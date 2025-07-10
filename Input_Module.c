#include<stdio.h>
struct info{

  
  char book_name[20];
  char author[25];
  int price;
  char genre[10];
  int stock;
}b;
void main(){
  char ch='y';
  FILE*pf;
  pf= fopen("io.txt","w");

  
  
while(ch=='Y'|| ch=='y'){
  
  printf("enter book name:");
  scanf("%s",&b.book_name);
  getchar();
  fputs(b.book_name,pf);
  printf("enter author name:");
  scanf("%s",b.author);
  getchar();
  fputs(b.author,pf);
  printf("enter price of book:");
  scanf("%d",&b.price);
  fprintf(pf,"%d",b.price);
  printf("enter genre of book:");
  scanf("%d",&b.genre);
  fprintf(pf,"%d",b.stock);
  printf("enter stock of book:");
  scanf("%d",&b.stock);
  fprintf(pf,"%d",b.stock);

 printf("do you want to input book Y/y:");
  scanf("%c",&ch);
  getchar();
}
  fclose(pf);



}