
#include <stdio.h>
void move(int arr[],int size){
    int p1= 0;
    int p2=(size-1);
    
   while(p1 != p2){
        
        if(arr[p1] < 0){
            p1++;
        }
        if(arr[p2] >0){
            p2--;
        }
        if(arr[p1]>0 && arr[p2]<0){
            int a =arr[p1];
            arr[p1]=arr[p2];
            arr[p2]=a;
            p1++;
            p2--;
        }
    }
    for(int i=0;i<size;i++)
        printf("%d",arr[i]);
    
    
}
int main()
{
    int size;
    printf("Enter the size \n");
    scanf("%d",&size);
    int arr[size];
    
    for(int i=0;i<size;i++){
     scanf("%d",&arr[i]);
    }
    
    move(arr,size);
    return 0;
    
}
