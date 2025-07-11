#include <stdlib.h>
#include<stdio.h>
#include<book.c>

void writebook( struct info b){
FILE*p;
p=fopen("input.txt","w");

if(p == NULL){
 return 0;
}
fputs(p,b.book_name);





}