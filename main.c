#include<stdio.h>

void add_book();
void readbook( );
void callsearch();
int authenticateUser();
int usernameExists();
void registerUser();
void getPassword();
void isse();
void callissue();
#define max_users 100
#define max_len 30



int main(){
    int m=0;


    

    char usernm[max_len], passwrd [max_len];
    int attempts= 3, choice ;

    printf("1. Register\n2. Login\nEnter choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        registerUser();
        int authenticateuser();

    }
    while(attempts>0){
        printf("\nEnter Username:");
        scanf("%s",&usernm);

        printf("\nEnter Password:");
        scanf("%s",&passwrd);

        if(authenticateUser(usernm,passwrd)){
            printf("\n Login Successful... welcome %s \n", usernm);
            break;
            
        }
        else {
            attempts --;
            printf("\n Invalid Username or Password..." );
        }
    }
    if(attempts==0){    
    printf("\n Failed Attempts limit reached! Access denied \n");
    
        return 0;

}






    while(m!=6){
    printf("----------------------\n");
    printf("1. Add Book\n");
    printf("2. Veiw Book\n");
    printf("3. Delete Book\n");
    printf("4. Search Book\n");
        printf("5. issue\n");
    printf("6. exit\n");
    scanf("%d",&m);
    switch(m){
        case 1:add_book();
        break;
        case 2:readbook( );
        break;
        case 4: callsearch();
        break;
        case 5: callissue( );
        break;
        
        case 6:printf("program exited");

        break;
        
        default:printf("out of range command");


    }
    }
    
     return 0;
}