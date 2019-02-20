
#include <stdio.h>

int main()
{
    char * s [ ] = {
        "we will teach you how to"  ,
        "Move a mountain"  ,
        "Level a building"  ,
        "Erase the past" ,
        "Make a million" };
    int  len =4;
    int count =0;
    for(int i=0;i<=len;i++)
    {
        for(int j=0;s[i][j]!='\0';j++){
            if(s[i][j] == 'e' || s[i][j] == 'E'){
                count++;
            }
        }
    }
    
    printf("%d",count);
    
    return 0;
    
    
}

