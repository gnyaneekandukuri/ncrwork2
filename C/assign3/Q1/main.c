
int subsum(int arr[],int size,int sum){
    int curr = arr[0];
    int start=0;
    for(int i=1;i<=size;i++){
        
        while(curr >sum && start < i-1){
            curr =curr-arr[start];
            start++;
        }
        if(curr == sum){
           // printf("valid");
            return 1;
        }
        if(i<size){
        curr = curr +arr[i];
        }
        
    }
    return 0;
    
}
int main()
{
    int size,sum=0;
    printf("size sum");
    scanf("%d %d",&size, &sum);
    int arr[size];
    
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
   int a = subsum(arr,size,sum);
    if(a == 1){
        printf("valid");
    }
    else{
        printf("Not valid sum");  
    }
    
    
}
