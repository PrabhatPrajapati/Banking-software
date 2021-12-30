#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void detail();
void account();
int main(){
system("cls");
int number;
    int account[4]={9818,8178,6655,9932};
    printf("enter your account:");
    scanf("%d",&number);
    if(number==account[4]){
    switch(account[4]){
    case 9818:
    printf("welcome prabhat\n");
    break;
    case 8178:
    printf("welcome raju \n");
    break;
    case 6655:
    printf("welcome deepak\n");
    break;
    case 9932:
    printf("welcome simran\n");
    break;
    }
    detail();    
    }
    else{
        printf("wrong account number please check and try again\n");
       }
return 0;
}
void detail(){
int balance=1000;
int choose,amount,bankinginfiniteloop=0;
while(1){
printf("1.Check balance\n");
printf("2.Deposite balance\n");
printf("3.Withdraw balance\n");
printf("4.Exit\n");
printf("\nenter your choice:");
scanf("%d",&choose);
printf("you choose:%d",choose);
switch(choose){
    case 1:
    printf("\nyour amount is:%d",balance);
    printf("\nsucessfull !!!!!!");
    break;
    case 2:
    printf("\nhow much amount you want to deposite:");
    scanf("%d",&amount);
    balance=balance+amount;
    printf("\nyour total balance is %d",balance);
    printf("\nsucessfull !!!!!!");
    break;
    case 3:
    printf("\nhow much amount you want to withdraw ");
    scanf("%d",&amount);
    if(amount<=balance){
    balance=balance-amount;
    printf("\nnow your balance is %d",balance);       
    }
    else{
        printf("\nyou don't have insufucient balence ");
    
    }
    printf("\nsucessfull !!!!!!!");
    break;
    
    case 4:
    bankinginfiniteloop=1;
    break;

    default:
    printf("\ninvalide option");
    break;
}
if(bankinginfiniteloop==1){
    printf("\nthanking for using our online support");
    break;
}
}
}
















