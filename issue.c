#include<stdio.h>
#include<string.h>
struct info{

  
  char book_name[20];
  char author[25];
  int price;
  char genre[15];
  int stock;
}b;


void issue(struct info b, char ss[20]){
  

    FILE  * k ;
  FILE*fp;
  
  int n=0;
 /*printf("enter book name:");
  scanf("%19s",&ss);*/ 
  fp = fopen("input.txt", "r");
  k=fopen("temp.txt","w");
  if(k == NULL){
    return ;
}


while (fscanf(fp, "%s %s %d %s %d",
              b.book_name,
              b.author,
              &b.price,
              b.genre,
              &b.stock) != EOF) {

      

    if (strcmp(ss,b.book_name)==0){
      b.stock=b.stock-1;
      printf("book successfully issued");
        n=n+1;
      }



       fputs(b.book_name,k);

        fputs("  ",k);

        fputs(b.author,k);

        fprintf(k,"  %d  ",b.price);
        fputs(b.genre,k);
        fprintf(k,"  %d  ",b.stock);
        fputs("\n",k);
    }
    fclose(k);
    fclose(fp);
      
      if(n==0){
        printf(" no book found\n");
    }
      
      
      
      
      
      }




void copy(struct info b){
    FILE*f1;
    FILE* f2;
    f1=fopen("temp.txt","r");
    f2=fopen("input.txt","w");
    if(f1==NULL || f2==NULL){
        printf("eror 404");
        return;
    }
while (fscanf(f1, "%s %s %d %s %d",
              b.book_name,
              b.author,
              &b.price,
              b.genre,
              &b.stock) == 5){

        fputs(b.book_name,f2);

        fputs("  ",f2);

        fputs(b.author,f2);

        fprintf(f2,"  %d  ",b.price);
        fputs(b.genre,f2);
        fprintf(f2,"  %d  ",b.stock);
        fputs("\n",f2);




              }
              fclose(f1);
              fclose(f2);

}




 void callissue(struct info b){
  char s[20];
  printf("enter the book name:");
  scanf("%19s",&s);
  issue(b,s);
  copy(b);




 }