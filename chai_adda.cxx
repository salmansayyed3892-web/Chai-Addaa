
	
#include <stdio.h>
#include <conio.h>

void main()
{
    int choice, qty;
    int q1=0, q2=0, q3=0, q4=0;
    int total;

    clrscr();

    printf("\n");
    printf("================================\n");
    printf("          CHAI ADDA\n");
    printf("       Tea Ordering System\n");
    printf("================================\n");

    do
    {
        printf("\n----------- MENU ------------\n");
        printf("1. Normal Chai   - Rs.10\n");
        printf("2. Masala Chai   - Rs.15\n");
        printf("3. Ginger Chai   - Rs.15\n");
        printf("4. Special Chai  - Rs.20\n");
        printf("0. Generate Bill\n");
        printf("-----------------------------\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 0)
            break;

        if(choice < 0 || choice > 4)
        {
            printf("Invalid Choice!\n");
            continue;
        }

        printf("Enter Quantity: ");
        scanf("%d", &qty);

        if(qty <= 0)
        {
            printf("Invalid Quantity!\n");
            continue;
        }

        switch(choice)
        {
            case 1:
                q1 = q1 + qty;
                printf("Normal Chai Added!\n");
                break;

            case 2:
                q2 = q2 + qty;
                printf("Masala Chai Added!\n");
                break;

            case 3:
                q3 = q3 + qty;
                printf("Ginger Chai Added!\n");
                break;

            case 4:
                q4 = q4 + qty;
                printf("Special Chai Added!\n");
                break;
        }

    } while(choice != 0);

    total = q1*10 + q2*15 + q3*15 + q4*20;

    clrscr();

    printf("\n");
    printf("================================\n");
    printf("          CHAI ADDA\n");
    printf("           FINAL BILL\n");
    printf("================================\n");

    if(q1 > 0)
        printf("Normal Chai  x %d = Rs.%d\n",q1,q1*10);

    if(q2 > 0)
        printf("Masala Chai  x %d = Rs.%d\n",q2,q2*15);

    if(q3 > 0)
        printf("Ginger Chai  x %d = Rs.%d\n",q3,q3*15);

    if(q4 > 0)
        printf("Special Chai x %d = Rs.%d\n",q4,q4*20);

    printf("--------------------------------\n");
    printf("TOTAL AMOUNT = Rs.%d\n",total);
    printf("================================\n");
    printf("     THANK YOU! VISIT AGAIN\n");
    printf("================================\n");

    getch();
}

