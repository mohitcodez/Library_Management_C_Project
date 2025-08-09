# include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_users 100
#define max_len 30

int authenticateUser(const char *usernm, const char *passwrd){
FILE *f = fopen("user.txt","r");
 if (f==NULL){
    printf("file can't open");
    return 0;

 }
 char storeduser[max_len], storedpass[max_len];
 while(fscanf(f,"%s %s",storeduser, storedpass)!= EOF){
    if(strcmp(usernm,storeduser)==0 && strcmp (passwrd,storedpass)==0){
        fclose(f);
        return 1;
    }
 }
fclose(f);
return 0;

}
int usernameExists(const char *usernm) {
    FILE *f = fopen("user.txt", "r");
    if (!f) return 0; 

    char storeduser[max_len], storedpass[max_len];
    while (fscanf(f, "%s %s", storeduser, storedpass) == 2) {
        if (strcmp(usernm, storeduser) == 0) {
            fclose(f);
            return 1; 
        }
    }
    fclose(f);
    return 0;
}


void registerUser() {
    char usernm[max_len], passwrd[max_len];

    printf(" Enter new username: ");
    scanf("%s", &usernm);

    if (usernameExists(usernm)) {
        printf("Username already exists. Try a different one.\n");
        return;
    }

    printf(" Enter new password: ");
    getPassword(passwrd);

    FILE *fp = fopen("user.txt", "a");
    if (!fp) {
        printf(" Could not open file for writing.\n");
        return;
    }

    fprintf(fp, "%s %s\n", usernm, passwrd);
    fclose(fp);

    printf(" Registration successful!\n");
}
void getPassword(char *passwrd) {
    scanf("%s", &passwrd); 
}
int main () {
    char usernm[max_len], passwrd [max_len];
    int attempts= 3, choice ;
     printf("1. Register\n2. Login\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        registerUser();
        return 0;
    }

    while(attempts>0){
        printf("\nEnter Username");
        scanf("%s",&usernm);

        printf("\nEnter Password");
        scanf("%s",&passwrd);

        if(authenticateUser(usernm,passwrd)){
            printf("\n Login Successful... welcome %s \n", usernm);
            return 0;
        }
        else {
            attempts --;
            printf("\n Invalid Username or Password...\n Attempts left %d \n", attempts );
        }
    }
    printf("\n Failed Attempts limit reached! Access denied \n");
    return 1;
}