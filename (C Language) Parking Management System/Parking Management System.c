#include<stdio.h>

int carr=0,mc=0,c=0,count=0;
int ecrr=0,emc=0,ec=0,ecount=0;
int tamount=0;
int amount=0;
void car();
void ecar();
void motorcycle();
void emotorcycle ();
void cycle();
void ecycle ();
void status();
void del();
int choice;
int menu();
       void main()
{
    while(1)
   {

     system("cls");

   switch(menu())
   {
   case 1:
       {
           car();
           break;
       }
        case 2:
            {
                motorcycle();
                break;
            }
             case 3:
                 {
                     cycle();
                     break;
                 }
                  case 4:
                      {
                         ecar();
                       break;
                      }
                       case 5:
                           {
                           emotorcycle ();
                               break;
                           }
                           case 6:
                               {
                                  ecycle ();
                                   break;
                                }
                           case 7:
                               {
                                    del();
                                     break;
                               }
                           case 8:
                               {
                                  status();
                                   break;
                               }

                       case 9:
                        {
                            exit(0);
                        }
                           default:
                               {
                                   printf("Invalid Choice");
                                }


   }

   }
    getch();
}
int menu()
{
    printf("\t\t.....................Welcome to the Parking Management System.....................");
    printf("\n\n\t\t\t\t***************MENU***************");
    printf("\n\n\n\t\t\t\t----------Entry Section----------");
printf("\n\t\t\t\t1.Entry Car");
printf("\n\t\t\t\t2.Entry Motorcycle");
printf("\n\t\t\t\t3.Entry Cycle");
printf("\n\t\t\t\t--------------Exit Section-----------");
printf("\n\t\t\t\t4.Exit Car");
printf("\n\t\t\t\t5.Exit Motorcycle");
printf("\n\t\t\t\t6.Exit Cycle");
printf("\n\t\t\t\t-------------------------------------");
printf("\n\t\t\t\t7.Delete Data");
printf("\n\t\t\t\t8.Show Saved Data");
printf("\n\t\t\t\t9.Exit From The Programme ");
printf("\n\n\t\t\t\t Enter your choice:");
scanf("%d",&choice);
return choice;
}

void car()
{
  carr++;
 amount=amount+100;

  count++;
  printf("\n\t\t\t\tRegistration completed successfully ");
  printf("\n\t\t\t\tPress (ENTER) to go Main Menu ... ");
  getch();
}
void motorcycle ()
{
  mc++;
  amount=amount+50;
   count++;
  printf("\n\t\t\t\tRegistration completed successfully ");
     printf("\n\t\t\t\tPress (ENTER) to go Main Menu ... ");
     getch();

}
void cycle ()
{
  c++;
  amount=amount+20;
   count++;
   printf("\n\t\t\t\tRegistration completed successfully ");
     printf("\n\t\t\t\tPress (ENTER) to go Main Menu ... ");
   getch();

}
void status()
{
    printf("\n\n\t\t\t\t----------Entry Section----------");
  printf("\n\t\t\t\t%d Car parked in the parking lot ",carr);
   printf("\n\t\t\t\t%d Motorcycle parked in the parking lot ",mc);
    printf("\n\t\t\t\t%d Cycle parked in the parking lot ",c);
    printf("\n\n\t\t\t\t--------------Exit Section-----------");

    printf("\n\t\t\t\tToday %d Car exit from the parking lot ",ecrr);
        printf("\n\t\t\t\t Today %d Motorcycle exit from the parking lot ",emc);
             printf("\n\t\t\t\t Today %d Cycle exit from the parking lot ",ec);
             printf("\n\n\t\t\t\t-----------------------------------");
     printf("\n\t\t\t\tTotal parked vehical:%d",count);
     printf("\n\t\t\t\tTotal exited vehical:%d",ecount);
          printf("\n\n\t\t\t\t----------Payment Section----------");

     printf("\n\t\t\t\tTotal Earned Rent:%d tk",tamount);
     int fa;
     fa=(amount-tamount);
       printf("\n\t\t\t\tTotal Unearned Rent:%d tk",fa);
       printf("\n\t\t\t\tPress (ENTER) to go Main Menu ... ");
     getch();
}
void del()
{
    carr=0;
    mc=0;
    c=0;
    ecrr=0;
    emc=0;
    ec=0;
    count=0;
    amount=0;
    tamount=0;
      printf("\n\t\t\t\tSuccessfully Delete All Data");
      printf("\n\t\t\t\tPress (ENTER) to go Main Menu ... ");
      getch();

}
//exit section//
void ecar()
{
  carr--;
  ecrr++;
 tamount=tamount+100;
  count--;
  ecount++;
  printf("\n\t\t\t\tCar exit the parking plot successfully and complited all the payment");
   printf("\n\t\t\t\t100tk added in the wallet,Successfully!!");
  printf("\n\t\t\t\tFor watcthing the payment history,press (ENTER) and then press(8)");
 getch();
}
void emotorcycle ()
{
  mc--;
  emc++;
  tamount=tamount+50;
   count--;
   ecount++;
     printf("\n\t\t\t\tMotorcycle exit the parking plot successfully and complited all the payment");
      printf("\n\t\t\t\t50tk added in the wallet,Successfully!!");

  printf("\n\t\t\t\tFor watcthing the payment history,press (ENTER) and then press(8)");
     getch();
}
void ecycle ()
{
  c--;
  ec++;
 tamount=tamount+20;
   count--;
   ecount++;
    printf("\n\t\t\t\tCycle exit the parking plot successfully and complited all the payment");
    printf("\n\t\t\t\t20tk added in the wallet,Successfully!!");
    printf("\n\t\t\t\tFor watcthing the payment history,press (ENTER) and then press(8)");
     getch();
}





