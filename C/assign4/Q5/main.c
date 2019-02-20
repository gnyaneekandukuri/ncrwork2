/******************************************************************************
 
 Online C Compiler.
 Code, Compile, Run and Debug C program online.
 Write your code in this editor and press "Run" button to compile and execute it.
 
 *******************************************************************************/

#include <stdio.h>

int main()
{
    int i=0;
    char s[20];
    scanf("%s",s);
    while(s[i]!='\0'){
        s[i] =    s[i] - 32 ;
        i++;
    }
    printf("%s",s);
    return 0;
}

