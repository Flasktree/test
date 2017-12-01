
// 11/10/17
//Final project.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	double total = 0;
	int quit = 0;
	int proStart = 0; 
	int checkMen = 0; 
	int itemList[] = { 1121, 1122, 1133, 6969, 1420, };
	double costArray[5] = { 0.01, 0.02, 4.48, 69.69, 4.20, };
	int custItem[] = { 0 };
	int itemCount = 0;
	int temp;
	int temp2;
	int temp3;
	int cCard = 1234567890;
	int card;
	int xl;
	int payMeth;
	float temp4;
	while (1 == 1) //the loop the program is contained in
	{
		printf("Welcome to the CS102 Grocery Store Kiosk! Input the number of the task you wish to do. Make your selection now!\n1. Start Checkout\n\n2. Lookup item\n");
		scanf_s("%d", &proStart);
		switch (proStart) //starts everything
		{
		case 1:
			quit = 0;
			while (quit == 0)
			{
				printf("Input the numbers of the following tasks to execute them.\n 1. Add item\n 2. Remove Item\n 3. Continue to Payment\n 4. quit\n"); //checkout
				scanf_s("%d", &checkMen);
				switch (checkMen)
				{
				case 1: //ADD TO CART
					printf("Input the ID of the item you wish to add to your cart.\n");
					scanf_s("%d", &temp);
					switch (temp)
					{
					case 1121 :
						printf("Item 1121 added to cart.\n");
						custItem[itemCount] = temp;
						itemCount = itemCount + 1;

						
						break;
					case 1133 :
						printf("Item 1133 added to cart.\n"); 
						custItem[itemCount] = temp;
						itemCount = itemCount + 1;
						
						break;
					case 6969 :
						printf("Item 6969 added to cart.");
						custItem[itemCount] = temp;
						itemCount = itemCount + 1;
						
						break;
					case 1420 :
						printf("Item 1420 added to cart.");
						custItem[itemCount] = temp;
						itemCount = itemCount + 1;
						
						break;
					case 1122:
						printf("Item 1122 added to cart.");
						custItem[itemCount] = temp;
						itemCount = itemCount + 1;
						
						break;
					default :
						printf("That's not a valid Item.\n");
						custItem[itemCount] = 0;
						break;
					}
					break;
				case 2: //remove from cart
					printf("In the order you added items to your cart, starting from zero, please input the number of the item you wish to remove.\n");
					scanf_s("%d", &temp2);
					custItem[temp2] = 0;
					printf("Item removed.\n");
					break;
				case 3: //continue to payment
					printf("Examining cart...");
					for (temp3 = itemCount; temp3 > 0; temp3--)
					{
						xl = custItem[(temp3-1)];
						switch (xl)
						{
						case 1121 :
							total = total + costArray[0];
							break;
						case 1133 :
							total = total + costArray[2];
							break;
						case 6969 :
							total = total + costArray[3];
							break;
						case 1420 :
							total = total + costArray[4];
							break;
						case 1122 :
							total = total + costArray[1];
							break;
						default :
							break;
							
						}
					}
					do
					{

						printf("Your remaining total is %.2f. \nPress 1 for cash, or 2 for credit. \n", total);
						scanf_s("%d", &payMeth);
						switch (payMeth)
						{
						case 1:
							printf("Please input the dollar amount you have now, in the format of 0.00.\n");
							scanf_s("%f", &temp4);
							total = total - temp4;
							break;
						case 2:
							printf("Your card number, please.\n");
							scanf_s("%d", &card);
							if (card == cCard)
							{
								total = 0;
								break;
							}
							else
							{
								printf("Your card number doesnt match any in our database. Please try again.\n");
								break;
							}
						}
					} while (total >= 0);
					printf("Transaction complete! Returning to menu...\n\n\n");
					break;
				case 4: //quit
					printf("Returning to main menu. Here are all of our items, in case you missed it!\n");
					quit = 1;
					break;
				}
			}
		case 2:
			printf("Here are all of our available items!\n 1. ID 1121: A stick. Cost: $0.01\n 2. ID 1133: One random item from SCP-261 (CONSUMER SAFETY NOT GUARANTEED) cost: $4.48 (equivalent to 500 yen)\n 3. ID 6969: A nun habit. Cost: $69.69\n 4. ID 1420: Totally not Illegal Substance. Cost: $4.20\n 5. ID 1122: A better stick (this one is made of mahogany!). Cost: $0.02\n "); //lookup
			break;
		case 69:
			printf("Nice.\n");//joke / easter egg
			break;
		case 420:
			printf("Marijuana isn't legal in this state yet. Nice try, though.\n");//another joke / easter egg
			break;
		default:
			printf("That's not a valid option, please try again.\n"); //oopsie
			break;
			}

		}
	}
	
