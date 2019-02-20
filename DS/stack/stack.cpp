#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int top = -1,*ptr;
void push(int n) {
	if (top == -1) {
		ptr = (int *)malloc(n * sizeof(int));
	}
	int ele;
	top++;
	printf("Enter an element");
	scanf("%d", &ele);
	ptr[top] = ele;
	

}
void pop(){
	top--;
}
void peek() {
	printf("%d", ptr[top]);
	getchar();
}

int main() {

	int n, option;
	printf("Enter the no of elements \n");
	scanf("%d", &n);
	
	int k = 1;
	
	while (k) {
		printf("1.push 2.pop 3.peek 4.Exit \n");
		scanf("%d", &option);
		switch (option) {

		case 1:
			if (top < n-1) {
				push(n);
			}
			else {
				printf("STACK FULL");
			}
			break;

		case 2:
			if (top == -1) {
				printf("STACK EMPTY");
			}
			else
			{
				pop();
			}	
			break;
		case 3:
			peek();
			break;

		case 4:
			k = 0;
			break;
		}
	}
}