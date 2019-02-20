
#include <stdio.h>
void deletes2(char s1[],char s2[]){
    int i=0,j=0,k=0;;
    while(s2[i]!='\0')
    {
        
        for(int j=0;s1[j]!='\0';j++)
        {
            if(s2[i] == s1[j])
            {
                k=j;
                while(s1[k]!='\0')
                {
                    s1[k] =s1[k+1];
                    k++;
                }
                j--;
                
            }
            
        }
        i++;
    }
    printf("%s",s1);
}

int main()
{
    char s1[10],s2[10];
    scanf("%s",s1);
    scanf("%s",s2);
    deletes2(s1,s2);
    
    return 0;
}

