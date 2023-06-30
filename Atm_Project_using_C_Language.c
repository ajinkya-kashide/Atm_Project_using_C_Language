// ATM Project.
#include <stdio.h>
#include <conio.h>
int main()
{
    float amount, withdrawal, deposit;
    char user,input;
    printf("Enter how much initial Amount you have :- ");
    scanf("%f", &amount);
jump:
    printf("\n\nPress 1 = Withdrawal\n\nPress 2 = Deposit\n\nPress 3 = Balance Inquiry\n\nPress 4 = exit\n");
    user = getch();
    switch (user)
    {
    case '1':
    withdrawal:
        printf("\n\nEnter a Amount you want to Withdraw:-\t");
        scanf("%f", &withdrawal);
        if (amount >= withdrawal)
        {
            amount = amount - withdrawal;
            printf("\n\nYour balance after Withdrawal is = %f\n\n", amount);
        }
        else
        {
            printf("\n\nThe Amount you want to withdrawal is higher than your initial amount\n\n\n\n");
        }
    response:
        printf("Press 'y' for Withdraw again\nPress 'n' for main menu\n");
        input = getche();
        if (input == 'y')
            goto withdrawal;
        else if (input == 'n')
        {
            printf("\n\n\n");
            goto jump;
        }
        else
            printf("\n\n~*~ Invalid key ~*~\n\n");
        goto response;
        break;
    case '2':
    deposit:
        printf("\n\nEnter a amount you want to deposit:- ");
        scanf("%f", &deposit);
        amount = amount + deposit;
        printf("After amount deposit, balance is %f\n\n", amount);
    response2:
        printf("Press 'y' for Deposit again\nPress 'n' for main menu\n");
        input = getche();
        if (input == 'y')
            goto deposit;
        else if (input == 'n')
        {
            printf("\n\n\n");
            goto jump;
        }
        else
            printf("\n\n~*~ Invalid key ~*~\n\n");
        goto response2;
        break;
    case '3':
    refresh:
        printf("\n\nYour account balance is = %f\n\n", amount);
    response3:
        printf("Press 'y' for refresh\nPress 'n' for main menu\n");
        input = getche();
        if (input == 'y')
            goto refresh;
        else if (input == 'n')
        {
            printf("\n\n\n");
            goto jump;
        }
        else
            printf("\n\n~*~ Invalid key ~*~\n\n");
        goto response3;
        break;
    case '4':
        printf("\n\n\n\t0(*,*)0  ~*~ successfully exited ~*~  0(',')0\n\n\n\t   *('.')*  ''*< Thank you >*''  *(='.'=)*\n\n\n\n");
        break;
    default:
        printf("\n\n\n~*~  0('.')0   please enter valid key   0(-_-)0  ~*~\n\n\n");
        goto jump;
    }
}
