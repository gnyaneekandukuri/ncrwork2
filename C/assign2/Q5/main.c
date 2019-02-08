
#include <stdio.h>

int main()
{
    int a,k,sum =0;
    scanf("%d",&a);
    k = a;
   
    while(k){
        int rev =k%10;
        sum = sum*10 + rev;
        k =k/10;
    }
    printf("%d",sum);
    return 0;
}
