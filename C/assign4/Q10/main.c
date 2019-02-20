
#include <stdio.h>
void deletec(char s1[],int count)
{
    
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]=='c'){
            for(int j=i;j<=count;j++){
                
                s1[j] =s1[j+1];
            }
            i--;
            count--;
        }
        
    }
    printf("%s",s1);
    
}

int main()
{
    char s1[10],s2[10];
    scanf("%s",s1);
    int count=0;
    for(int i=0;s1[i]!='\0';i++){
        count++;
    }
    deletec(s1,count+1);
    
    
    return 0;
}

