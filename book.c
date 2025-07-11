#include<stdio.h>

struct info{

  
  char book_name[20];
  char author[25];
  int price;
  char genre[15];
  int stock;
}b;
struct info book(){
    struct info b;


printf("enter book name:");
 // scanf("%s",& b.book_name);
  gets(b.book_name);
 

  printf("enter author name:");
  //scanf("%s",b.author);
  gets(b.author);


  printf("enter price of book:");
  scanf("%d",&b.price);
  

  printf("enter genre of book:");
  //scanf("%s",&b.genre);
  scanf("%s",&b.genre);
  getchar();

  printf("enter stock of book:");
  scanf("%d",&b.stock);

    return b;

}
