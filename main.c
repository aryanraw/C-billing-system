# include<stdio.h>
 
void main(void){
    int code = 0;
    int qty = 0;
    float price = 0.0;
    float amt = 0.0;
    float totalAmt =0.0;
    float cash = 0.0;
    char addAnother;

    do{
        system("cls");
        printf("==============\n");
        printf("PIZZA BOX MENU\n");
        printf("==============\n\n");
        printf("1. Cheese Pizza\t\t\t Rs 350\n");
        printf("2. Pepperoni Pizza\t\t Rs 320\n");
        printf("3. Pineapple Pizza\t\t Rs 300\n");
        printf("4. Hawaiian Pizza\t\t Rs 350\n");
        printf("5. Margherita Pizza\t\t Rs 400\n");

        printf("\nEnter code\t:");
        scanf("%d", &code);
        printf("\nEnter quantity\t:");
        scanf("%d", &qty);

        switch (code)
        {
        case 1:
            price = 350;    
            break;
        case 2:
            price = 320;
            break;
        case 3:
            price = 300;
            break;
        case 4:
            price = 350;
            break;
        case 5:
            price = 400;
            break;
        default:
            printf("Invalid code\n");
            break;
        }

        amt = price*qty;
        printf("\nAmount: %.2f", amt);

        totalAmt = totalAmt + amt;
        printf("\nTotal Amount\t: %.2f", totalAmt);
        printf("\nAdd another order (y/n)?\n");
        addAnother = getch();
    } while (addAnother == 'y' || addAnother == 'Y');
    
    do
    {
        printf("\nCash Tendered\t: ");
        scanf("%f", &cash);
    } while (cash < totalAmt);
    

    float change = cash - totalAmt;
    printf("\nChange\t\t: %.2f", change);
    printf("\n\nThank you! come back again!!");
}