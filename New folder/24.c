#include <stdio.h>

int main() {
    char ch;
    
   
    printf("Enter a letter: ");
    scanf("%c", &ch);
    
   
    if (ch == 'a')
        printf("%c is a vowel.\n", ch);
    else if (ch == 'e')
        printf("%c is a vowel.\n", ch);
    else if (ch == 'i')
        printf("%c is a vowel.\n", ch);
    else if (ch == 'o')
        printf("%c is a vowel.\n", ch);
    else if (ch == 'u')
        printf("%c is a vowel.\n", ch);
    else if (ch == 'A')
        printf("%c is a vowel.\n", ch);
    else if (ch == 'E')
        printf("%c is a vowel.\n", ch);
    else if (ch == 'I')
        printf("%c is a vowel.\n", ch);
    else if (ch == 'O')
        printf("%c is a vowel.\n", ch);
    else if (ch == 'U')
        printf("%c is a vowel.\n", ch);
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("%c is a consonant.\n", ch);
    else
        printf("%c is not a valid letter.\n", ch);
    
    return 0;
}
