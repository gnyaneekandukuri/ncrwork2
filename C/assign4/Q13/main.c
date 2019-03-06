#include <stdio.h>
#define SIZE 15
void ExpandShortString(char *str1,int str2Size){
    char *str2 =(char *)malloc(sizeof(char)*str2Size);
    int j=0;
    for(int i=0;str1[i]!='\0';i++){
        
        if(str1[i]=='-'){
            int k =i+1;
            int l =i-1;
            int diff = str1[k]-str1[l];
            if(diff > 26){
               
                return;
            }
           // printf("Difference is %d \n",diff);
            int count =1;
            while(diff){
                str2[j]= str1[l]+count;
                j++;
                count++;
                diff--;
            }
        i++;
        }
        else{
            str2[j] = str1[i];
            j++;
        }
    }
    printf("%s",str2);
}
int main(void) {
 //Expanding the shorthand string notations and storing them into another string
 
 char *str1 = (char *)malloc(sizeof(char)*SIZE);
 scanf("%s",str1);
    int str2Size =0;;
 for(int i=0;str1[i]!='\0';i++){
   if(str1[i]=='-'){

       int j = i-1;// keeps track of pre char
       int k = i+1;//keeps track of post char
       if(str1[k] < str1[j]){
           printf("Invalid ShortHand Representation \n");
          
           return;
       }
      int g = str1[k]-str1[j];
      if(g > 26){
          printf("Invalid ShortHand Representation  \n");
          return 0;
      }
      else{
           str2Size+=g;
      }
      
      i++;
   } 
   else{
        str2Size++;
       
   }
 }
 //printf("\n %d",str2Size);
 ExpandShortString(str1,str2Size);
	return 0;
}

