#include<stdio.h>

main()
{
	
	int a,b,c,d,e;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Enter the value of c : ");
	scanf("%d",&c);
	printf("Enter the value of d : ");
	scanf("%d",&d);
	printf("Enter the value of e : ");
	scanf("%d",&e);
		
	if(a < b){
		if(a < c){
			if(a < d){
				if(a < e){
					printf("a is min");
				}
				else{
					printf("e is min");
				}
			}
			else{
				if(d < e){
					printf("d is min");
				}
				else{
					printf("e is min");
				}
			}
		}
		else{
			if(c < d){
				if(c < e){
					printf("c is min");
				}
				else{
					printf("e is min");
				}
			}
			else{
				if(d < e){
					printf("d is min");
				}
				else{
					printf("e is min");
				}
			}
		}
	}
	else{
		if(b < c){
			if(b < d){
				if(b < e){
					printf("b is min");
				}
				else{
					printf("e is min");
				}
			}
			else{
				if(d < e){
					printf("d is min");
				}
				else{
					printf("e is min");
				}
			}
		}
		else{
			if(c < d){
				if(c < e){
					printf("c is min");
				}
				else{
					printf("e is min");
				}
			}
			else{
				if(d < e){
					printf("d is min");
				}
				else{
					printf("e is min");
				}
			}
		}
	}
	
}
