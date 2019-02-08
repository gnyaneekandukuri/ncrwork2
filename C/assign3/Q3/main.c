

#include <stdio.h>

int main()
{
    int num,count=0;
   scanf("%d",&num);
   while(num){
       if(num & 1){
           count++;
       }
       num = num>>1;
   }
    printf("%d",count);
    return 0;
}
