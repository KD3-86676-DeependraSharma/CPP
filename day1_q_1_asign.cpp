#include<iostream>
using namespace std;

struct Date 
{
   int day;
   int month;
   int year;
};
   void initDate(struct Date *ptr)
   {
    ptr-> day=01;
      ptr-> month=01;
      ptr-> year=1969;
   }
   void printDateOnConsole(struct Date *ptr)
   {
       printf("DATE : %d-%d-%d",ptr->day,ptr->month,ptr->year);
   }
   void acceptDateFromConsole(struct Date *ptr)
   {
       printf("Enter DD, MM,YYYY :");
       scanf("%d%d%d",&ptr->day,&ptr->month,&ptr->year);
   }
int main()
{      
   struct Date t1;
   struct Date t2;

   initDate(&t2);
   printDateOnConsole(&t1);
   int x;
   do
   {
     
    printf("\nEnter the choice :\n 0. for Exit\n 1. for Enter date \n 2. for Print Date \n 3. Default date \n ");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
        acceptDateFromConsole(&t1);
        break;
    case 2:
        printDateOnConsole(&t1);
        break;
    case 3:
         initDate(&t1);
         printDateOnConsole(&t1);

        break;
    default:
        printf("wrong choice.....");
        break;
    }
    /* code */
   } while (x!=0);

return 0;
}
