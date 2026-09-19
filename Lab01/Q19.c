#include <stdio.h>

int main(){
    char ch ;
    printf("Enter letter : \n");
    scanf("%c", &ch);

    ch >= 'a' && ch <= 'z'?printf("Letter is small case"):printf("Entered letter is not small case letter");

    return 0;
}