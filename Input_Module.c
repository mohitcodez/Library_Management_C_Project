struct info{

  
  char book_name[20];
  char author[25];
  int price;
  char genre[10];
  int stock;
}b;
int main(){
  char ch;
  printf("do you want to input book Y/y");
  scanf("%c",&ch);
while(ch=='Y'|| ch=='y'){
  printf("do you want to input book Y/y");
  scanf("%c",&ch);
  printf("enter book name:");
  scanf("%s",&b.book_name);
  getchar(b.book_name);
  printf("enter author name:");
  scanf("%s",b.author);
  getchar(b.author);
  
}
printf("do you want to input book Y/y");
  scanf("%c",&ch);


return 0;}