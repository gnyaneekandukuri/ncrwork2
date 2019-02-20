#include <stdio.h>
int btod(int num){
    int i=0,sum=0;
      while (num!=0)
    {
     int r = num%10;
        num/= 10;
        sum += r*pow(2,i);
        ++i;
    }
    printf("%d",sum);
}
int dtob(int num){
    while(num){
        if(num&1){
            printf("1");
            num =num>>1;
        }
        else{
            printf("0");
            num =num>>1;
        }
    }
}

int main()
{  int option,num;
    printf("enter 1(btod) 2(dtob) ");
    scanf("%d",&option);
     switch(option){
        case 1:
           scanf("%d",&num);
           btod(num);
           break;
        case 2:
            scanf("%d",&num);
            dtob(num);
            break;
        
    }
   
    
    
    

    return 0;
}
