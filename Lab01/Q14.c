#include <stdio.h>

int main(){
    char ch;
    printf("Enter character : ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z')
        printf("The character is small case");

        else if(ch >= 'A' && ch <= 'Z')
            printf("The character is upper case");
        

        else if(ch >= '0' && ch<= '9')
        printf("The character is a digit");

        else 
        printf("Character is a special symbol");
       
    return 0;
}