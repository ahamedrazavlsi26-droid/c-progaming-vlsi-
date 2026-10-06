#include<stdio.h>
int main()
{
	int a,b,choice,res;
	printf("============BRANCHING STATEMENTS=======\n");
	printf("ENTER THE FIRST NUMBER:");
	scanf("%d",&a);
	printf("ENTER THE SECOND NUMBER:");
	scanf("%d",&b);
	printf("\n----------MENU-------------\n");
	printf("1.add\n");
	printf("2.sub\n");
	printf("3.mult \n");
	printf("4.divi  %\n");
	printf("5.mod %\n");
	printf("\n ENTER YOUR CHOICE:");
		scanf("%d",&choice);
		printf("\n-----------RESULT--------\n");
		switch(choice)
		{
			case 1:
				res=a+b;
				printf("result=%d",res);
				break;
			case 2:
				res=a-b;
				printf("result=%d",res);
				break;
			case 3:
				res=a*b;
				printf("result=%d",res);
				break;
			case 4:
				if(b!=0)
				{
				res=a/b;
				printf("result=%d",res);
				}
				else
				{
					printf("divi by zero is dnot possible");
				}
				break;
			case 5:
					if(b!=0)
				{
				res=a%b;
				printf("result=%d",res);
				}
				else
				{
				printf("mod by zero is dnot possible");
				}
				break;
				default:
					printf("invalid choice");
		}
		return 0;
	}