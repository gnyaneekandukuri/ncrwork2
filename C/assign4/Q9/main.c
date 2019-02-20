

#include <stdio.h>
int index(char s1[],char s2[]){
    int index;
    for(int i=0;s1[i]!='\0';i++){
        
        for(int j=0;s2[j]!='\0';j++){
            if(s1[i]==s2[j]){
                index = i;
                return index;
            }
        }
    }
    return -1;
}

int main()
{ char s1[10],s2[10];
    scanf("%s",s1);
    scanf("%s",s2);
    int n =index(s1,s2);
    if(n == -1){
        printf("no match");
    }
    else{
        printf("%d",n);
    }
    return 0;
}

