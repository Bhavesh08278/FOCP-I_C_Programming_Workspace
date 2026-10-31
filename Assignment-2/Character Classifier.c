#include <stdio.h>
int main(){
 char ch;
 printf("Enter the character here :");
 scanf("%c",&ch);
 
 if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')||
(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')){
    printf("\nVowel");
}
else if(ch >='0' && ch<='9'){
    printf("\nDigit");
}
else if ((ch >='a' && ch<='z') || (ch >='A' && ch<='Z')){

    printf("\nConsonant");
}
else 
printf("\nSpecial character");


    return 0;
}