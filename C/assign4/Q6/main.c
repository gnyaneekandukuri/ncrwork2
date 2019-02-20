
#include <stdio.h>
void reverse(char s[],char c[],int i,int len){
    if(s[i] == '\0'){
        c[i] = '\0';
        return ;
    }
    else{
        
        reverse(s,c,i+1,len);
        c[len-i-1] = s[i];
    }
    
    
    
}
int main()
{
    char s[20],c[20];
    int k=0,i=0,len=4;
    scanf("%s",s);
    
    reverse(s,c,i,len);
    printf("%s",c);
    
    return 0;
}

