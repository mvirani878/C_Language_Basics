/*
    Title :- wap to simulate a simple ATM machine using swith-case 
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
   int accn, opin1,opin2, opt, npin, otp;
   float b = 199990.98, amt;
    
    do
   {
      printf("\n\n\t**********************************");
      printf("\n\tWELCOME TO BANK OF RK");
      printf("\n\t***********************************");

      printf("\n\n Enter your 8 digits account number/ATM card :- ");
      scanf("%d", &accn);
      if (accn >= 10000000 && accn <= 99999999)
      {
         printf("\n Enter your 4 digit PIN :- ");
         scanf("%d", &opin1);
         if (opin1 >= 1000 && opin1 <= 9999)
         {
            printf("\nSelect option from below");
            printf("\n\n 1. WITHDRAW CASH");
            printf("\n 2. BALANCE INQUIRY/CHECK BALANCE ");
            printf("\n 3. change PIN ");
            printf("\n 4. Exit");
            printf("\n\nOption no.");
            scanf("%d", &opt);

            switch (opt)
            {

            case 1:
               printf("\n\n\t You selected for option NO.1  WITHDRAW CASH ");
               printf("\n\n Enter withdrawl amount :- ");
               scanf("%f", &amt);

               if (amt > 0 && amt <= b)
               {
                  b -= amt;
                  printf(" %.2f withdrawn sucessfully", amt);
               }
               else
                  printf("\nInvalide amount \n Enter valid amount");
               break;

            case 2:
               printf("\n\n\t You selected for option NO.2 BALANCE INQUIRY/CHECK BALANCE ");
               printf("\n\n YOUR BALANCE IS :- %.2f ", b);
               break;

            case 3:
               printf("\n\n\t You selected for option NO.3 change PIN ");
               printf("\n\n Enter OLD pin :- ");
               scanf("%d", &opin2);
               if (opin1==opin2)
               {
                  printf("\n Enter OTP(6 digit otp) :- ");
                  scanf("%d", &otp);
                   if (otp >= 100000 && otp <= 999999)
                    {
                       printf("\n Enter NEW pin :- ");
                       scanf("%d", &npin);
                      if (!(opin1 == npin) && (npin >= 1000 && npin <= 9999))
                        printf("\n\n Your NEW PIN is updated ");
                      else
                        printf("\n\n INVALID PIN \n ENTER PIN PROPERLY ");
                     }
                   else
                      printf("\n Invalid OTP");
               }
               else
                 printf("\n\n Enter valid PIN");
         
              break;/* code */  

            case 4:
               printf("\n\n\t You selected for option NO.4 EXIT ");
               exit(0);
               break;

            default:
               printf("\n Invalid option. Please select 1, 2, 3 or 4.");
               break;
            }

            
         }
         else
            printf("\n Enter valid PIN ");
      }
      else
         printf("\n Enter valid account number");
   } while (opt != 4);
   return 0;
}
