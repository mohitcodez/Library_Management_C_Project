#include<stdio.h>
struct info{

  
  char book_name[20];
  char author[25];
  int price;
  char genre[10];
  int stock;
}b[100];
void main(){
  char ch='y';
  FILE*pf;
  pf= fopen("io.txt","w");
  int i=0;
  
  
while(ch=='Y'|| ch=='y'){
  
  printf("enter book name:");
  scanf("%s",& b[i].book_name);
  getchar();
  fputs(b[i].book_name,pf);

  printf("enter author name:");
  scanf("%s",b[i].author);
  getchar();
  fputs(b[i].author,pf);

  printf("enter price of book:");
  scanf("%d",&b[i].price);
  fprintf(pf,"%d",b[i].price);

  printf("enter genre of book:");
  scanf("%s",&b[i].genre);
  getchar();
  fputs(b[i].genre,pf);

  printf("enter stock of book:");
  scanf("%d",&b[i].stock);
  fprintf(pf,"%d",b[i].stock);

 printf("do you want to input book Y/y:");
  scanf("%c",&ch);
  getchar();
  i=i+1;
}
  fclose(pf);



}