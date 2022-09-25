#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char str[100];
    char sen[100];
    scanf("%c \n",&ch);
    scanf("%s \n",&str);
    scanf("%[^\n]s",&sen);
    printf("%c \n",ch);
    printf("%s \n",str);
    printf("%s \n",sen);    
    return 0;
}


https://www.hackerrank.com/challenges/playing-with-characters/submissions/code/292515589
