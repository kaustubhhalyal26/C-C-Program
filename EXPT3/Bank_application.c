#include<stdio.h>
#include<stdlib.h>
typedef struct { int acc_no;         //structure to define list which includes account number,type,name and balance
                char acc_type;
                char name[10];
                float balance;
                }account;
account customer[10];
account customer[]={{100,'S',"Amy",1000.9},{101,'R',"Gail",3000.50},{102,'S',"Marc",5000},{103,'S',"Garry",4000.80},{104,'S',"Cathy",6000.3}};//Predefined list
float amt;
int arrayindex;
void balance()//display the balance of customer

{

printf("\nThe balance is :%0.2f\n",customer[arrayindex].balance);
}
void deposit()//function to deposit amount
{

 printf("Enter the amount to be deposited\n");
 scanf("%f",&amt);
 customer[arrayindex].balance+=amt;//adding deposited amount
 printf("Rs.%0.2f is deposited in your account\n",amt);
 printf("\nThe current balance is %0.2f",customer[arrayindex].balance);
}

void withdraw()//function for withdrawing the amount from account
{

printf("\nEnter the amount to be withdrawn\n");
scanf("%f",&amt);
if(amt>customer[arrayindex].balance)
    printf("\nNo Sufficient Balance\n");
else{
    customer[arrayindex].balance-=amt;//subtracting the amount
    printf("please Collect the cash\nThe current Balance is %0.2f\n",customer[arrayindex].balance);
}
}


int main()
{
 int acctnum,choice;
 int i,flag=0;
 printf("\nWelcome to SBI Bank\n");
 printf("Enter your Account Number\n");
 scanf("%d",&acctnum);

 for(i=0;i<5;i++)
 {
  if(customer[i].acc_no==acctnum)//checking the acc no in prefined list
  {
    flag=1;
    break;
  }
  else
  continue;
 }
    if(flag==0)
    {
    printf("\nInvalid ACC No\n");
    exit(0);
    }
    arrayindex=acctnum %100;
    printf("\n ACC No:%d\t Acc Type:%c\t Name:%s\n",customer[arrayindex].acc_no,customer[arrayindex].acc_type,customer[arrayindex].name);

    do{
    printf("\n Please enter the choice\n");
    printf("\n1.Balance Enquiry  2.Deposit Balance  3.Withdraw    4.Exit:  ");//selecting the required operation
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:balance();
           break;
    case 2:deposit();
           break;
    case 3:withdraw();
           break;
    default:exit(0);
    };
    }while(1);
    return 0;
}


