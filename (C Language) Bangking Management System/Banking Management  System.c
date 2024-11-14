#include <stdio.h>
#include <conio.h>
#include<string.h>

int number,c, ca, diposit_amount, wm, tm, TAN,total_amount,total_diposit=0,total_withdrow=0,total_transfer=0;



char name[100];

void fp()
{
	printf("\t\t\t\t--------------------------AB BANK--------------------------");
	printf("\n\n\n\t\t\t\t This system help you to do bank work like\n\t\t\t\tDiposit\n\t\t\t\tWithdrow\n\t\t\t\tTransfer ");
	printf("\n\t\t\t\tPress any key to continue...");
	getch();
	printf("\n\n\t\t\t\tEnter your name: ");
	gets(name);
	printf("\n\t\t\t\tEnter your account number:");
	scanf("%d", &number);
	printf("\t\t\t\tEnter your current amount: ");
	scanf("%d", &ca);
	printf("\n\t\t\t\tPress (Enter) to continue....");
	getch();
}
int tfp()
{
		printf("\t\t\t\t--------------------------AB BANK--------------------------");

	printf("\n\n\t\t\t\t1.Diposit");
	printf("\n\t\t\t\t2.Withdrow");
	printf("\n\t\t\t\t3.Transfer ");
	printf("\n\t\t\t\t4.Check Details");
	printf("\n\t\t\t\t5.Exit");
	printf("\n\t\t\t\tEnter your choice: ");
	scanf("%d", &c);
	return (c);
	printf("\n\t\t\t\tPress (Enter) to continue....");
	getch();

}

void dp()
{
printf("\n\t\t\t\t************************DIPOSIT************************");
	printf("\n\n\t\t\t\tEnter diposit amount: ");
	scanf("%d", &diposit_amount);
	printf("\n\n\t\t\t\tDeposit request accepted successfully!!");
	printf("\n\t\t\t\t%d tk deposit successfully..... ", diposit_amount);

	 total_diposit=total_diposit+diposit_amount;
	 total_amount=((ca+ total_diposit)-(total_withdrow+total_transfer));

    printf("\n\n\t\t\t\tYour current amount:%d",total_amount);
    	printf("\n\t\t\t\tPress (Enter) to continue....");
	getch();
}
void wp()
{
printf("\n\t\t\t\t************************WITHDROW************************");


	printf("\n\n\t\t\t\t  Enter withdrow amount: ");
	scanf("%d", &wm);
	printf("\n\n\t\t\t\tWithdrow request accepted successfully!! ");
	printf("\n\t\t\t\t%d tk Withdrow successfully..... ", wm);
	    total_withdrow=total_withdrow+wm;
	    total_amount=((ca+ total_diposit)-(total_withdrow+total_transfer));
	printf("\n\n\t\t\t\tYour current amount:%d",total_amount);
		printf("\n\t\t\t\tPress (Enter) to continue....");
	getch();
}
void tp()
{
    printf("\n\t\t\t\t************************TRANSFER************************");

	printf("\n\t\t\t\tEnter the account number,for transfer the amount: ");
	scanf("%d", &TAN);
	printf("\n\n\t\t\t\tEnter transfer amount: ");
	scanf("%d", &tm);
	printf("\n\n\t\t\t\tTransfer request accepted successfully!! ");
	printf("\n\t\t\t\t%d tk transfered in account number:%d,successfully.....", tm, TAN);
	 total_transfer=total_transfer+tm;
	 total_amount=((ca+ total_diposit)-(total_withdrow+total_transfer));
	printf("\n\n\t\t\t\tYour current amount:%d",total_amount);
		printf("\n\t\t\t\tPress (Enter) to continue....");
	getch();
}
void cdp()
{
   printf("\n\t\t\t\t************************DETAILS************************");
	printf("\n\t\t\t\tYour name:%s", name);
	printf("\n\t\t\t\tYour account number:%d", number);
    total_amount=((ca+ total_diposit)-(total_withdrow+total_transfer));
	printf("\n\t\t\t\tYour current amount:%d", total_amount);
	printf("\n\t\t\t\t.................................");

	printf("\n\n\t\t\t\tRecent diposit history:%d", diposit_amount);

	printf("\n\t\t\t\tTotal diposit amount:%d",total_diposit);
	printf("\n\t\t\t\tRecent withdrow history:%d", wm);


	printf("\n\t\t\t\tTotal withdrow amount:%d",total_withdrow);
	printf("\n\t\t\t\tRecent transfer history:%d", tm);

	printf("\n\t\t\t\tTotal transfer amount:%d",total_transfer);
		printf("\n\t\t\t\tPress (Enter) to continue....");
	getch();
}

void main()
{
	fp();
	while (1)
	{
		system("cls");
		switch(tfp())
		{
			case 1:
			{
				dp();
				break;
			}

			case 2:
			{
				wp();
				break;
			}
			case 3:
			{
				tp();
				break;
			}

			case 4:
			{
				cdp();
				break;
			}

			case 5:
			{
				exit(0);
				break;
			}
			default:
			{
				printf("Invalid Choice");
			}
		}
	}

	getch();
}
