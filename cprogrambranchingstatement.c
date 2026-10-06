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
	printf("1.CHECK POSITIVE ,NEGATIVE OR ZERO\n");
	printf("2.CHCECK EVEN OR ODD\n");
	printf("3. find LARGEST OF TWO NUMBERS\n");
	printf("4. CHECK DIVISIBILITY BY %\n");
	printf("\n ENTER YOUR CHOICE:");
		scanf("%d",&choice);
		printf("\n-----------RESULT--------\n");
		switch(choice)
		{
			case 1:
				if(a>0)
				printf("%d is positive",a);
			else if(a>0)
				printf("%d is negative",a);
			else 
				printf("%d is zero",a);
				break;
			case 2:
				if(a%2==0)
				printf("%d is even",a);
			else
				printf("%d is odd",a);
				break;
		   case 3:
		   	if(a>b)
		   	{
		   		res=a;
		   		printf("%d if the largest number",res);
			}
			else if(b>a)
			{
				res=b;
		   		printf("%d if the largest number",res);
			}
			else
			{
		   		printf("both number are equal");
			}
			break;
			case 4:
				if (a%5==0)
				printf("%d is divisible by 5",a);
				else
				printf("%d if not divisible by 5",a);
				break;
				default:
				printf("invalid choice");
		}
	return 0;
}