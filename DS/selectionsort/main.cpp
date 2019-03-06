#include<stdio.h>
void selectionsort(int arr[],int n){
    int min=INT_MAX;
    int ele;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++)
        {
            if(arr[j] <= min){
                min = arr[j];
                 ele =j;
            }
       
        }
       // printf("min %d \n",min);
        int a =arr[i];
        arr[i] =arr[ele];
        arr[ele] =a;  
        
        min =INT_MAX;
       // printf("..%d",min);
       
    }
    
}
int main()
{
    int n;
    printf("Enter an array length");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
