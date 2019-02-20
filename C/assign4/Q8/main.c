/******************************************************************************
 
 Online C Compiler.
 Code, Compile, Run and Debug C program online.
 Write your code in this editor and press "Run" button to compile and execute it.
 
 *******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of strings");
    scanf("%d",&n);
    int i=0;
    char *s[n];
    int l =n;
    while(n){
        s[i] = (char *)malloc(5*sizeof(char));
        scanf("%s",s[i]);
        i++;
        n--;
    }
    
    
    for(int j=0;j<l;j++){
        {
            printf("%s \n",s[j]);
        }
        
    }
    
    return 0;
}

