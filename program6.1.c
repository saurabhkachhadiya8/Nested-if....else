#include<stdio.h>

main()
{
	
	int a,b,c;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Enter the value of c : ");
	scanf("%d",&c);
	
	if(a > b){
		if(a > c){
			printf("a is max");
		}
		else{
			printf("c is max");
		}
	}
	else{
		if(b > c){
			printf("b is max");
		}
		else{
			printf("c is max");
		}
	}
	
}
