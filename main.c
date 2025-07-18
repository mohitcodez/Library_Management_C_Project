#include<stdio.h>

void add_book();
void readbook( );
void main(){
    int m=0;
    while(m!=4){
    printf("----------------------\n");
    printf("1. Add Book\n");
    printf("2. Veiw Book\n");
    printf("3. Delete Book\n");
    printf("4. exit\n");
    scanf("%d",&m);
    switch(m){
        case 1:add_book();
        break;
        case 2:readbook( );
        break;
        case 4:printf("program exited");
        break;
        default:printf("out of range command");


    }
    }
    
     
}