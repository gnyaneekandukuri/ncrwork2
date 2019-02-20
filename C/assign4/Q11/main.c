

#include <stdio.h>
void strtoken(char s1[],char del)
{
    int i=0,j=0,k=0;
    char *s[5];
    s[0] = (char*)malloc(3*sizeof(char));
    //printf("sdf");
    while(s1[i]!='\0'){
        
        if(s1[i] == del){
            s[k][j]='\0';
            k++;
            
            
            s[k] = (char*)malloc(3*sizeof(char));
            j=0;
            i++;
        }
        else{
            s[k][j] = s1[i];
            i++;
            j++;
        }
        
    }
    
    for(int j=0;j<5;j++){
        printf("%s \n",s[j]);
    }
    
    
    
}

int main()
{
    char s1[10], s2;
    
    scanf("%s",s1);
    printf("Enter the delimter \n");
    scanf(" %c",&s2);
    
    strtoken(s1,s2);
    
    
    return 0;
}

