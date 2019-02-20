
#include <stdio.h>
int count=0;
int i=0;
int replace(char cat[]){
    while(cat[i]!='\0'){
        if(cat[i]==' '){
            cat[i]='-';
            count++;
            
        }
        i++;
    }
    printf("%s \n",cat);
    return count;
}
int main()
{
    char cat[] = "The cat sat";
    int n= replace(cat);
    
    printf("%d",n);
    
    return 0;
}

