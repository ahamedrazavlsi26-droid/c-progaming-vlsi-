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
	printf("1.AND\n");
	printf("2.OR\n");
	printf("3.XOR \n");
	printf("4.NOT \n");
	printf("5. left shift \n");
	printf("6.right shift \n");
	printf("ENTER YOUR CHOICE\n :");
		scanf("%d",&choice);
		printf("\n--------------------------RESULT-------------------------\n");
		switch(choice)
		{
			case 1:
				res=a&b;
				printf("bitwisw AND result=%d",res);
				break;
			case 2:
				res=a|b;
				printf("bitwisw OR result=%d",res);
				break;
			case 3:
				res=a^b;
				printf("bitwisw XOR result=%d",res);
				break;	
			case 4:
				res=~a;
				printf("bitwisw NOT result=%d",res);
				break;	
			case 5:
				res=a<<b;
				printf("left shift result=%d",res);
				break;		
			case 6:
				res=a>>b;
				printf("right shift result=%d",res);
				break;
			    default:
			    	printf("invalid choice");
		}
		return 0;
	}