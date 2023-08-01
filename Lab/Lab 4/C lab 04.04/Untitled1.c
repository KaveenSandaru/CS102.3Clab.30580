#include <Stdio.h>
int main()
{
    char ch;
    printf("Please enter the character : ");
    scanf("%c",&ch);
    switch(ch)
    {
        case'a':printf("%c is an vowel.\n",ch);break;
        case'e':printf("%c is an vowel.\n",ch);break;
        case'i':printf("%c is an vowel.\n",ch);break;
        case'o':printf("%c is an vowel.\n",ch);break;
        case'u':printf("%c is an vowel.\n",ch);break;
        case'A':printf("%c is an vowel.\n",ch);break;
        case'E':printf("%c is an vowel.\n",ch);break;
        case'I':printf("%c is an vowel.\n",ch);break;
        case'O':printf("%c is an vowel.\n",ch);break;
        case'U':printf("%c is an vowel.\n",ch);break;
        default:printf("%c is not an vowel.\n",ch);break;
    }
    return 0;
}
