#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	printf("by 3a713240\n\n");
	char input_arr[]="Taiwan, Touch, Your, Heart";
	char *ptr_input;
	
	int x;
	int l;
	
	l=strlen(input_arr);
	ptr_input=input_arr;
	
	for(x=0;x<l;x++){
		
		if(*(ptr_input+x)>64 && *(ptr_input+x)<90){
			printf("%c", *(ptr_input+x));
		}
		else if(*(ptr_input+x)>96 && *(ptr_input+x)<123){
			printf("%c", *(ptr_input+x));
		}
		else if(*(ptr_input+x)==32){
			printf("%c", *(ptr_input+x));
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
}
