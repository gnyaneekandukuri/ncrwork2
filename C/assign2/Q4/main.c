

#include <stdio.h>
int f =0;
int fact(int num){
    if(num >0){
      f = num * fact(num-1);
    }
    else {
        return 1;
    }
    return f;
}

int main()
{
   int num;
   scanf("%d",&num);
   int a = fact(num);
   printf("%d",a);
    return 0;
}
