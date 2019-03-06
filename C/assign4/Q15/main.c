#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define SIZE 15
char *stringReverse(char *str) {

	int stringLength = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		stringLength++;
	}

	int j = stringLength - 1;
	char *reversedString = (char *)malloc(sizeof(char)*stringLength);
	for (int i = 0; str[i] != '\0'; i++) {
		reversedString[i] = str[j];
		j--;
	}
	reversedString[stringLength] = '\0';
	//  printf("\n %s",reversedString);
	return reversedString;
}
char *stringCopy(char *copy, char *str) {
	int stringLength = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		stringLength++;
	}
	char *dest;
	dest = (char *)malloc(sizeof(char)*stringLength);
	for (int i = 0; str[i] != '\0'; i++) {
		dest[i] = str[i];
	}
	dest[stringLength] = '\0';
	return dest;

}
int stringCompare(char *str, char *str2) {
	int k = 5;
	int stringLength1 = 0, stringLength2 = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		stringLength1++;
	}
	for (int i = 0; str2[i] != '\0'; i++) {
		stringLength2++;
	}
	int iteratorLength = stringLength2 >stringLength1 ? stringLength2 : stringLength1;
	for (int i = 0; i<iteratorLength; i++)
	{
		if (str[i] == str2[i]) {
			continue;
		}
		else if (str[i]>str2[i]) {
			k = 10;
			return 1;
		}
		else {
			k = 10;
			return -1;
		}

	}
	if (k == 5) {
		return 0;
	}
}
char *stringconcat(char *str3, char* str) {
	int stringLength1 = 0;
	int stringLength2 = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		stringLength1++;
	}
	for (int i = 0; str3[i] != '\0'; i++) {
		stringLength2++;
	}
	int finalLength = stringLength1 + stringLength2;
	str3 = (char *)realloc(str3,finalLength);
	for(int i=0;str[i]!='\0';i++){
		str3[stringLength2] = str[i];
		stringLength2++;
		}
	str3[finalLength] = '\0';
	return str3;
}
int main(void) {
	char *str = (char *)malloc(sizeof(char)*SIZE);
	printf("Enter a String \n");
	scanf("%s", str);
	int option;
	int breakVar = 10;
	while (breakVar == 10)
	{
		printf(" \n 1.Reversing String 2.Copying String 3.String Compare 4:String Concatination 5:Exit \n");
		printf("Enter an option \n");

		scanf("%d", &option);
		switch (option)
		{

		case 1:
			printf("Reversing a string \n");
			char *reversedString = stringReverse(str);
			printf(" reversed string is %s \n", reversedString);
			break;
		case 2:
			printf("Copying a string \n");
			//char* strcpy(char* dest, const char* src);
			char *copy = NULL;
			printf(" copied string is %s \n", stringCopy(copy, str));
			break;

		case 3:
			printf("To compare two strings \n");
			printf("Enter a String to compare \n");
			char *str2 = (char *)malloc(sizeof(char)*SIZE);
			scanf("%s", str2);
			int retComp = stringCompare(str, str2);
			if (retComp == 0) {
				printf("Same Strings\n");
			}
			else if (retComp == 1) {
				printf("string isnt similar string1 >string2 \n");
			}
			else {
				printf("string isnt similar string1 <string2 \n");
			}
			break;
		case 4:
			//char *strcat(char *dest, const char *src)
			printf("concatination of two strings \n");
			printf("Enter a string to concatinate \n");
			char *str3 = (char *)malloc(sizeof(char)*SIZE);
			scanf("%s",str3);
			str3 = stringconcat(str3, str);
			printf("\n %s", str3);
			break;
		case 5:
			breakVar = 5;
			break;

		}

	}
	// int strcmp (const char* str1, const char* str2);

	return 0;
}
