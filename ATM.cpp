#include<stdio.h>
#include<conio.h>
main()
{
	int balance , amt,total;
	char name[15], opt;
	
	printf("Enter Your Name :");
	scanf("%s",&name);
	
	printf("Enter Your Last Balance :");
	scanf("%d",&balance);
	
	printf("Press C for credit amount or D for debit amount \n");
	scanf("%s",&opt);
	
	
	switch(opt){
		
		case 'c' :
			printf("Enter Amount :");
			scanf("%d",&amt);
			total=balance+amt;
			printf("Hello! Your Curent Balance is : %d",total);
			break ;
			
		case 'd' :	
			printf("Enter Amount :");
			scanf("%d",&amt);
			if(amt<=balance)
			{
			total=balance-amt;
			printf("HELLO! Your Curent Balance is : %d",total);
		}else
			{
				printf("------Insuficiant Balance-----");
			}
			break;
		default :
			printf ("###  Wrong Input  ###");
	}
	
	getch();
}
