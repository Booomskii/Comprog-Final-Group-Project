#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    string regusername;
    string regfname;
    string reglname;
    string regpass;
    string regeaddress;
    string regaddress1;
    string regaddress2;
    string regnum;
    string defuser = "dev";
    string defpass = "foodmonkey";
    string deffname = "Food";
    string deflname = "Monkey";
    string defeaddress = "foodmonkey@gmail.com";
    string defaddress1 = "Blk 1 Lot 55, Villa Celina 2C";
    string defaddress2 = "Pakigne, Minglanilla, Cebu";
    string defnum = "09271271924";
    string loguser;
    string logpass;
    int command;
    int exit;
    int a = 0;
    int b = 0;
    int c = 0;
    int g = 0;
    int r = 1;
    int u = 0;
	int x=0;
    int y=1;
    int z=0;
    int select=0;
	float select2=0;
    int select3=0;
	double MF1=0, MF2=0, MF3=0, MF4=0, MF5=0;
	double J1=0, J2=0, J3=0, J4=0, J5=0;
	double M1=0, M2=0, M3=0, M4=0, M5=0;
	double LF1=0, LF2=0, LF3=0, LF4=0, LF5=0;
	double CK1=0, CK2=0, CK3=0, CK4=0, CK5=0;
	double S1=0, S2=0, S3=0, S4=0, S5=0;
	double Sh1=0, Sh2=0, Sh3=0, Sh4=0, Sh5=0;
	double KFC1=0, KFC2=0, KFC3=0, KFC4=0, KFC5=0;
	double BK1=0, BK2=0, BK3=0, BK4=0, BK5=0;
	double OB1=0, OB2=0, OB3=0, OB4=0, OB5=0;

while (r>=1)
{
    while (y==1)
    {
        cout << "\n\t\t\t\t\t\t FoodMonkey"<< endl;
        cout << "\t\t\t\t  Your Number 1 Food Delivery App on the Go!\n\n"<< endl;
        cout << "\n\t\t\t\t  (1)\t\t      (2)\t\t (3)" << endl;
        cout << "\n\t\t\t\t Log-in       |\t    Register \t|\tExit"<< endl;
        cout << "\nPress number of instruction:" << endl;
        cin >> command;
        cout << "\n\n----------------------------------------------------------------------------------------------------------------" << endl;
        switch (command)
        {
            case 1:
            cout << "\n\t\t\t\t\t\t FoodMonkey" << endl;
            cout << "\t\t\t\t  Your Number 1 Food Delivery App on the Go!\n\n" << endl;
            cout << "\n\t\t\t\t\t      Log-in to Account\n";
            cout << "\n\t\t\t\t Username: ";
            cin.ignore(1,'\n');
            getline (cin, loguser);
            cout << "\n\t\t\t\t Password: ";
            getline (cin, logpass);
            Sleep(500);
            if (loguser==regusername && logpass==regpass)
            {
                cout << "\n\n----------------------------------------------------------------------------------------------------------------" << endl;
                cout << "\n\n\t\t\t\t\tWelcome to FoodMonkey, "<< regfname << "!" << endl;
                u=1;
                y=0;
                z=1;
            }
            else if (loguser=="dev" && logpass=="foodmonkey")
            {
                cout << "\n\n----------------------------------------------------------------------------------------------------------------" << endl;
                cout << "\n\n\t\t\t\t\t     Welcome back, "<< deffname << "!" << endl;
                u=2;
                y=0;
                z=1;
            }
            else
            {
                cout << "\n\t\t\t\t   You have entered wrong Username/Password!\n\n\n" << endl;
                y=1;
            }
            break;
            case 2:
            cout << "\n\t\t\t\t\t\t FoodMonkey" << endl;
            cout << "\t\t\t\t  Your Number 1 Food Delivery App on the Go!\n\n" << endl;
            cout << "\n\t\t\t\t\t\tRegistration\n";
            cout << "\n\t\t\tFirst Name: ";
            cin.ignore(1,'\n');
            getline (cin, regfname);
            cout << "\n\t\t\tLast Name: ";
            getline (cin, reglname);
            cout << "\n\t\t\tEmail Address: ";
            getline (cin, regeaddress);
            cout << "\n\t\t\tAddress 1: ";
            getline (cin, regaddress1);
            cout << "\n\t\t\tAddress 2: ";
            getline (cin, regaddress2);
            cout << "\n\t\t\tPhone Number/Telephone Num: ";
            getline (cin, regnum);
            cout << "\n\t\t\tUsername: ";
            getline (cin, regusername);
            cout << "\n\t\t\tPassword: ";
            getline (cin, regpass);
            cout << "\n\t\t\t\t\t     Registration Done!\n\n\n" << endl;
            y=1;
            break;
            case 3:
            cout << "\n\t\t\t\t\t\t FoodMonkey" << endl;
            cout << "\t\t\t\t  Your Number 1 Food Delivery App on the Go!\n\n" << endl;
            cout << "\n\t\t\t\t\t      Exit Application?\n" << endl;
            cout << "\n\t\t\t\t\t\t(1)\t(2)" << endl;
            cout << "\n\t\t\t\t\t\tYes  |  No" << endl;
            cout << "\nPress number of instruction:" << endl;
            cin >> exit;
            switch (exit)
            {
                case 1:
                cout << "\n\t\t\t\t\tThank you for using the App!\n\n";
                y=0;
				x=0;
				z=0;
				g=0;
				c=0;
                r=0;
                break;
                case 2:
                y=1;
                break;
                default:
                cout << "\n\t\t\t\tInputted number of instruction not assigned!\n\n\n" << endl;
            }
            break;
            default:
            cout << "\n\t\t\tInputted number of instruction not assigned!" << endl;
        }
    }
    if (z==1)
    {
    	char choice;
		command = 0;

       	cout << "\n\n\t\t\t      Select Restaurants, Eateries, & Fast Food Chains:" << endl;
		cout << "\n\n\t\t\t\t            [1] Manila Foodshoppe";
		cout << "\n\n\t\t\t\t            [2] Jollibee";
		cout << "\n\n\t\t\t\t            [3] McDonald's";
		cout << "\n\n\t\t\t\t            [4] La Fortuna";
		cout << "\n\n\t\t\t\t            [5] Chowking";
		cout << "\n\n\t\t\t\t            [6] Shakey's";
        cout << "\n\n\t\t\t\t            [7] Shawarma";
        cout << "\n\n\t\t\t\t            [8] KFC";
        cout << "\n\n\t\t\t\t            [9] Burger King";
        cout << "\n\n\t\t\t\t            [10] Orange Brutus";
        cout << "\n\n\t\t\t\t            [11] Cancel";
		cout << "\n\nEnter the Selected Food Shop: ";
		cin >> command;
        cout << "\n\n----------------------------------------------------------------------------------------------------------------" << endl;
		switch(command)		
		{
		while (x==1)
			{
			case 1:
				printf("\n\t\t\t\t\t     Manila FoodShoppe");
				printf("\n\n\t\t\tFoods\t\t\t\t\t\t\tPrice");
				printf("\n\n\t\t\t[1] CORN SOUP..........................................Php 160.65");
				printf("\n\n\t\t\t[2] LOMI...............................................Php 165.80");
				printf("\n\n\t\t\t[3] WANTOK SOUP........................................Php 190.25");
				printf("\n\n\t\t\t[4] BEEF STEAK.........................................Php 235.50");
				printf("\n\n\t\t\t[5] BEEF CURRY.........................................Php 235.50");
				printf("\n\nSelect food item to buy: " );
				scanf("%d", &select);
				switch (select)
				{
					case 1:
					printf("\nHow many 'CORN SOUP' would you like to buy? " );
					scanf("%f", &select2);
					MF1 = MF1 + select2 * 160.65;
					break;
					case 2:
					printf("\nHow many 'LOMI' would you like to buy? " );
					scanf("%f", &select2);
					MF2 = MF2 + select2 * 165.80;
					break;
					case 3:
					printf("\nHow many 'WANTOK SOUP' would you like to buy? " );
					scanf("%f", &select2);
					MF3 = MF3 + select2 * 190.25;
					break;
					case 4:
					printf("\nHow many 'BEEF STEAK' would you like to buy? " );
					scanf("%f", &select2);
					MF4 = MF4 + select2 * 235.50;
					break;
					case 5:
					printf("\nHow many 'BEEF CURRY' would you like to buy? " );
					scanf("%f", &select2);
					MF5 = MF5 + select2 * 235.50;
					break;
					default:
					printf("\nSorry We do not have that on our list.\n");
				}
				cout << "\nWould you like to purchase again from the same shop? Y/N : ";
				cin >> choice;
				if (choice=='Y' || choice=='y')
				{
                    select=0;
					x=1;
				}
				else if (choice=='N' || choice=='n')
				{
					x=0;
					g=1;
				}
                else
                {
                    cout << "\n\t\t\tYou have inputted invalid response!" << endl;
                }
			}
			break;
			while (x==1)
			{
			case 2:
				printf("\n\t\t\t\t\t\tJollibee");
				printf("\n\n\t\t\tFoods\t\t\t\t\t\t\tPrice");
				printf("\n\n\t\t\t[1] 1PC BURGER STEAK...................................Php 77.50");
				printf("\n\n\t\t\t[2] CHICKENJOY SOLO....................................Php 84.00");
				printf("\n\n\t\t\t[3] JOLLY SPAGHETTI FAMILY PAN.........................Php 220.00");
				printf("\n\n\t\t\t[4] YUM BURGER SOLO....................................Php 39.75");
				printf("\n\n\t\t\t[5] JOLLY CRISPY FRIES BUCKET..........................Php 142.50");
				printf("\n\nSelect food item to buy: " );
				scanf("%d", &select);
				switch (select)
				{
					case 1:
					printf("\nHow many '1PC BURGER STEAK' would you like to buy? ");
					scanf("%f", &select2);
					J1 = J1 + select2 * 77.50;
					break;
					case 2:
					printf("\nHow many 'CHICKENJOY SOLO' would you like to buy? ");
					scanf("%f", &select2);
					J2 = J2 + select2 * 84.00;
					break;
					case 3:
					printf("\nHow many 'JOLLY SPAGHETTI FAMILY PAN' would you like to buy? ");
					scanf("%f", &select2);
					J3 = J3 + select2 * 220.00;
					break;
					case 4:
					printf("\nHow many 'YUM BURGER SOLO' would you like to buy? ");
					scanf("%f", &select2);
					J4 = J4 + select2 * 39.75;
					break;
					case 5:
					printf("\nHow many 'JOLLY CRISPY FRIES BUCKET' would you like to buy? ");
					scanf("%f", &select2);
					J5 = J5 + select2 * 142.50;
					break;
					default:
					printf("\nSorry We do not have that on our list.\n");
				}
				cout << "\nWould you like to purchase again from the same shop? Y/N : ";
				cin >> choice;
				if (choice=='Y' || choice=='y')
				{
					x=1;
				}
				else if (choice=='N' || choice=='n')
				{
					x=0;
					g=1;
				}
                else
                {
                    cout << "\n\t\t\tYou have inputted invalid response!" << endl;
                }
			}
			break;
			while (x==1)
			{
            g=1;
			case 3: 
				printf("\n\t\t\t\t\t\tMcDonald's");
				printf("\n\n\t\t\tFoods\t\t\t\t\t\t\tPrice");
				printf("\n\n\t\t\t[1] 6PC CHICKEN MCSHARE BOX............................Php 330.50");
				printf("\n\n\t\t\t[2] CHICKEN MCDO SOLO..................................Php 75.00");
				printf("\n\n\t\t\t[3] McCRISPY CHICKEN FILLET ALA KING SOLO..............Php 59.75");
				printf("\n\n\t\t\t[4] McCRISPY CHICKEN SANDWHICH.........................Php 45.00");
				printf("\n\n\t\t\t[5] BFF FRIES..........................................Php 134.50");
				printf("\n\nSelect food item to buy: " );
				scanf("%d", &select);
				switch (select)
				{
					case 1:
					printf("\nHow many '6PC CHICKEN MCSHARE BOX' would you like to buy? ");
					scanf("%f", &select2);
					M1 = M1 + select2 * 330.50;
					break;
					case 2:
					printf("\nHow many 'CHICKEN MCDO SOLO' would you like to buy? ");
					scanf("%f", &select2);
					M2 = M2 + select2 * 75.00;
					break;
					case 3:
					printf("\nHow many 'McCRISPY CHICKEN FILLET ALA KING SOLO' would you like to buy? ");
					scanf("%f", &select2);
					M3 = M3 + select2 * 59.75;
					break;
					case 4:
					printf("\nHow many 'McCRISPY CHICKEN SANDWHICH' would you like to buy? ");
					scanf("%f", &select2);
					M4 = M4 + select2 * 45.00;
					break;
					case 5:
					printf("\nHow many 'BFF FRIES' would you like to buy? ");
					scanf("%f", &select2);
					M5 = M5 + select2 * 134.50;
					break;
					default:
					printf("\nSorry We do not have that on our list.\n");
				}
				cout << "\nWould you like to purchase again from the same shop? Y/N : ";
				cin >> choice;
				if (choice=='Y' || choice=='y')
				{
					select=0;
					x=1;
				}
				else if (choice=='N' || choice=='n')
				{
					x=0;
				}
                else
                {
                    cout << "\n\t\t\tYou have inputted invalid response!" << endl;
                }
			}
			break;
			while (x==1)
			{
			case 4:
				printf("\n\t\t\t\t\t\tLa Fortuna");
				printf("\n\n\t\t\tFoods\t\t\t\t\t\t\tPrice");
				printf("\n\n\t\t\t[1] BELGIUM PLAIN (4pc's)..............................Php 50.00");
				printf("\n\n\t\t\t[2] BELGIUM UBE (4pc's)................................Php 70.50");
				printf("\n\n\t\t\t[3] TIKOY WHITE........................................Php 50.00");
				printf("\n\n\t\t\t[4] PIANONO............................................Php 50.00");
				printf("\n\n\t\t\t[5] DICE HOPIA BIG.....................................Php 50.00");
				printf("\n\nSelect food item to buy: " );
				scanf("%d", &select);
				switch (select)
				{
					case 1:
					printf("\nHow many 'BELGIUM PLAIN (4pc's)' would you like to buy? ");
					scanf("%f", &select2);
					LF1 = LF1 + select2 * 50.00;
					break;
					case 2:
					printf("\nHow many 'BELGIUM UBE (4pc's)' would you like to buy? ");
					scanf("%f", &select2);
					LF2 = LF2 + select2 * 70.50;
					break;
					case 3:
					printf("\nHow many 'TIKOY WHITE' would you like to buy? ");
					scanf("%f", &select2);
					LF3 = LF3 + select2 * 50.00;
					break;
					case 4:
					printf("\nHow many 'PIANONO' would you like to buy? ");
					scanf("%f",&select2);
					LF4 = LF4 + select2 * 50.00;
					break;
					case 5:
					printf("\nHow many 'DICE HOPIA BIG' would you like to buy? ");
					scanf("%f", &select2);
					LF5 = LF5 + select2 * 50.00;
					break;
					default:
					printf("\nSorry We do not have that on our list.\n");
				}
				cout << "\nWould you like to purchase again from the same shop? Y/N : ";
				cin >> choice;
				if (choice=='Y' || choice=='y')
				{
					select=0;
					x=1;
				}
				else if (choice=='N' || choice=='n')
				{
					x=0;
					g=1;
				}
			}
			break;
			while (x==1)
			{
			case 5:
				printf("\n\t\t\t\t\t\tChowking");
				printf("\n\n\t\t\tFoods\t\t\t\t\t\t\tPrice");
				printf("\n\n\t\t\t[2] PORK CHAO FAN......................................Php 73.50");
				printf("\n\n\t\t\t[4] BEEF CHAO FAN......................................Php 100.00");
				printf("\n\n\t\t\t[3] CHINESE-STYLE FRIED CHICKEN........................Php 131.75");
				printf("\n\n\t\t\t[4] SWEET 'n' SOUR PORK................................Php 134.00");
				printf("\n\n\t\t\t[5] CHUNKY ASADO SIOPAO................................Php 44.50");
				printf("\n\nSelect food item to buy: " );
				scanf("%d", &select);
				switch (select)
				{
					case 1:
					printf("\nHow many 'PORK CHAO FAN' would you like to buy? ");
					scanf("%f", &select2);
					CK1 = CK1 + select2 * 73.50;
					break;
					case 2:
					printf("\nHow many 'BEEF CHAO FAN' would you like to buy? ");
					scanf("%f", &select2);
					CK2 = CK2 + select2 * 100.00;
					break;
					case 3:
					printf("\nHow many 'CHINESE-STYLE FRIED CHICKEN' would you like to buy? ");
					scanf("%f", &select2);
					CK3 = CK3 + select2 * 131.75;
					break;
					case 4:
					printf("\nHow many 'SWEET 'n' SOUR PORK' would you like to buy? ");
					scanf("%f", &select2);
					CK4 = CK4 + select2 * 134.00;
					break;
					case 5:
					printf("\nHow many 'CHUNKY ASADO SIOPAO' would you like to buy? ");
					scanf("%f", &select2);
					CK5 = CK5 + select2 * 44.50;
					break;
					default:
					printf("\nSorry We do not have that on our list.\n");
				}
				cout << "\nWould you like to purchase again from the same shop? Y/N : ";
				cin >> choice;
				if (choice=='Y' || choice=='y')
				{
					select=0;
					x=1;
				}
				else if (choice=='N' || choice=='n')
				{
					x=0;
					g=1;
				}
                else
                {
                    cout << "\n\t\t\tYou have inputted invalid response!" << endl;
                }
			}
			break;
			while (x==1)
			{
			case 6:
				printf("\n\t\t\t\t\t\tShakey's");
				printf("\n\n\t\t\tFoods\t\t\t\t\t\t\tPrice");
				printf("\n\n\t\t\t[1] LOUSIANA SHRIMP PIZZA..............................Php 353.50");
				printf("\n\n\t\t\t[2] SMOKED SALMON PIZZA................................Php 353.50");
				printf("\n\n\t\t\t[3] ANGUS BURGER PIZZA.................................Php 353.50");
				printf("\n\n\t\t\t[4] SCALLOP PRIMO PIZZA................................Php 353.50");
				printf("\n\n\t\t\t[5] CHEESY CHICK'N PIZZA...............................Php 353.50");
				printf("\n\nSelect food item to buy: " );
				scanf("%d", &select);
				switch (select)
				{
					case 1:
					printf("\nHow many 'LOUSIANA SHRIMP PIZZA' would you like to buy? ");
					scanf("%f", &select2);
					S1 = S1 + select2 * 353.50;
					break;
					case 2:
					printf("\nHow many 'SMOKED SALMON PIZZA' would you like to buy? ");
					scanf("%f", &select2);
					S2 = S2 + select2 * 353.50;
					break;
					case 3:
					printf("\nHow many 'ANGUS BURGER PIZZA' would you like to buy? ");
					scanf("%f", &select2);
					S3 = S3 + select2 * 353.50;
					break;
					case 4:
					printf("\nHow many 'SCALLOP PRIMO PIZZA' would you like to buy? ");
					scanf("%f", &select2);
					S4 = S4 + select2 * 353.50;
					break;
					case 5:
					printf("\nHow many 'CHEESY CHICK'N PIZZA' would you like to buy? ");
					scanf("%f", &select2);
					S5 = S5 + select2 * 353.50;
					break;
					default:
					printf("\nSorry We do not have that on our list.\n");
				}
				cout << "\nWould you like to purchase again from the same shop? Y/N : ";
				cin >> choice;
				if (choice=='Y' || choice=='y')
				{
					select=0;
					x=1;
				}
				else if (choice=='N' || choice=='n')
				{
					x=0;
					g=1;
				}
                else
                {
                    cout << "\n\t\t\tYou have inputted invalid response!" << endl;
                }
			}
			break;
            while (x==1)
			{
			case 7:
				printf("\n\t\t\t\t\t\tShawarma");
				printf("\n\n\t\t\tFoods\t\t\t\t\t\t\tPrice");
				printf("\n\n\t\t\t[1] WRAP BEEF SHAWARMA.................................Php 85.00");
				printf("\n\n\t\t\t[2] WRAP CHICKEN SHAWARMA..............................Php 75.50");
				printf("\n\n\t\t\t[3] SHAWARMA RICE (BEEF)...............................Php 180.25");
				printf("\n\n\t\t\t[4] SHAWARMA RICE (CHICKEN)............................Php 160.00");
				printf("\n\n\t\t\t[5] SHAWARMA NOODLES...................................Php 99.75");
				printf("\n\nSelect food item to buy: " );
				scanf("%d", &select);
				switch (select)
				{
					case 1:
					printf("\nHow many 'WRAP BEEF SHAWARMA' would you like to buy? " );
					scanf("%f", &select2);
					Sh1 = Sh1 + select2 * 85.00;
					break;
					case 2:
					printf("\nHow many 'WRAP CHICKEN SHAWARMA' would you like to buy? " );
					scanf("%f", &select2);
					Sh2 = Sh2 + select2 * 75.50;
					break;
					case 3:
					printf("\nHow many 'SHAWARMA RICE (BEEF)' would you like to buy? " );
					scanf("%f", &select2);
					Sh3 = Sh3 + select2 * 180.25;
					break;
					case 4:
					printf("\nHow many 'SHAWARMA RICE (CHICKEN)' would you like to buy? " );
					scanf("%f", &select2);
					Sh4 = Sh4 + select2 * 160.00;
					break;
					case 5:
					printf("\nHow many 'SHAWARMA NOODLES' would you like to buy? " );
					scanf("%f", &select2);
					Sh5 = Sh5 + select2 * 99.75;
					break;
					default:
					printf("\nSorry We do not have that on our list.\n");
				}
				cout << "\nWould you like to purchase again from the same shop? Y/N : ";
				cin >> choice;
				if (choice=='Y' || choice=='y')
				{
					select=0;
					x=1;
				}
				else if (choice=='N' || choice=='n')
				{
					x=0;
					g=1;
				}
                else
                {
                    cout << "\n\t\t\tYou have inputted invalid response!" << endl;
                }
			}
			break;
            while (x==1)
			{
			case 8:
				printf("\n\t\t\t\t\t\t   KFC");
				printf("\n\n\t\t\tFoods\t\t\t\t\t\t\tPrice");
				printf("\n\n\t\t\t[1] CHICKEN AND SOUP...................................Php 110.50");
				printf("\n\n\t\t\t[2] REGULAR CHICKEN ALA CARTE..........................Php 89.00");
				printf("\n\n\t\t\t[3] CHRISTMAS BUCKET MEAL..............................Php 870.90");
				printf("\n\n\t\t\t[4] ZINGER BURGER......................................Php 85.25");
				printf("\n\n\t\t\t[5] ALA KING RICE BOWL MEAL............................Php 142.00");
				printf("\n\nSelect food item to buy: " );
				scanf("%d", &select);
				switch (select)
				{
					case 1:
					printf("\nHow many 'CHICKEN AND SOUP' would you like to buy? ");
					scanf("%f", &select2);
					KFC1 = KFC1 + select2 * 110.50;
					break;
					case 2:
					printf("\nHow many 'REGULAR CHICKEN ALA CARTE' would you like to buy? ");
					scanf("%f", &select2);
					KFC2 = KFC2 + select2 * 89.00;
					break;
					case 3:
					printf("\nHow many 'CHRISTMAS BUCKET MEAL' would you like to buy? ");
					scanf("%f", &select2);
					KFC3 = KFC3 + select2 * 870.90;
					break;
					case 4:
					printf("\nHow many 'ZINGER BURGER' would you like to buy? ");
					scanf("%f", &select2);
					KFC4 = KFC4 + select2 * 85.25;
					break;
					case 5:
					printf("\nHow many 'ALA KING RICE BOWL MEAL' would you like to buy? ");
					scanf("%f", &select2);
					KFC5 = KFC5 + select2 * 142.00;
					break;
					default:
					printf("\nSorry We do not have that on our list.\n");
				}
				cout << "\nWould you like to purchase again from the same shop? Y/N : ";
				cin >> choice;
				if (choice=='Y' || choice=='y')
				{
					select=0;
					x=1;
				}
				else if (choice=='N' || choice=='n')
				{
					x=0;
					g=1;
				}
                else
                {
                    cout << "\n\t\t\tYou have inputted invalid response!" << endl;
                }
			}
			break;
            while (x==1)
			{
			case 9:
				printf("\n\t\t\t\t\t\tBurger King");
				printf("\n\n\t\t\tFoods\t\t\t\t\t\t\tPrice");
				printf("\n\n\t\t\t[1] HAMBURGER..........................................Php 99.50");
				printf("\n\n\t\t\t[2] CHEESEBURGER.......................................Php 100.25");
				printf("\n\n\t\t\t[3] DOUBLE WHOPPER.....................................Php 199.50");
				printf("\n\n\t\t\t[4] DOUBLE QUARTER POUND KING BURGER...................Php 250.75");
				printf("\n\n\t\t\t[5] BACON KING BURGER..................................Php 230.00");
				printf("\n\nSelect food item to buy: " );
				scanf("%d", &select);
				switch (select)
				{
					case 1:
					printf("\nHow many 'HAMBURGER' would you like to buy? ");
					scanf("%f", &select2);
					BK1 = BK1 + select2 * 99.50;
					break;
					case 2:
					printf("\nHow many 'CHEESEBURGER' would you like to buy? ");
					scanf("%f", &select2);
					BK2 = BK2 + select2 * 100.25;
					break;
					case 3:
					printf("\nHow many 'DOUBLE WHOPPER' would you like to buy? ");
					scanf("%f", &select2);
					BK3 = BK3 + select2 * 199.50;
					break;
					case 4:
					printf("\nHow many 'DOUBLE QUARTER POUND KING BURGER' would you like to buy? ");
					scanf("%f", &select2);
					BK4 = BK4 + select2 * 250.75;
					break;
					case 5:
					printf("\nHow many 'BACON KING BURGER' would you like to buy? ");
					scanf("%f", &select2);
					BK5 = BK5 + select2 * 230.00;
					break;
					default:
					printf("\nSorry We do not have that on our list.\n");
				}
				cout << "\nWould you like to purchase again from the same shop? Y/N : ";
				cin >> choice;
				if (choice=='Y' || choice=='y')
				{
					select=0;
					x=1;
				}
				else if (choice=='N' || choice=='n')
				{
					x=0;
					g=1;
				}
                else
                {
                    cout << "\n\t\t\tYou have inputted invalid response!" << endl;
                }
			}
			break;
            while (x==1)
			{
			case 10:
				printf("\n\t\t\t\t\t\tOrange Brutus");
				printf("\n\n\t\t\tFoods\t\t\t\t\t\t\tPrice");
				printf("\n\n\t\t\t[1] BRUTUS NOODLES.....................................Php 55.50");
				printf("\n\n\t\t\t[2] BRUTUS ARROZ CALDO.................................Php 59.75");
				printf("\n\n\t\t\t[3] BRUTUS PORK ADOBO RICE.............................Php 78.00");
				printf("\n\n\t\t\t[4] BRUTUS CRISPY CHICKEN FILLET.......................Php 87.25");
				printf("\n\n\t\t\t[5] BRUTUS SIZZLING FISH FILLET........................Php 107.80");
				printf("\n\nSelect food item to buy: " );
				scanf("%d", &select);
				switch (select)
				{
					case 1:
					printf("\nHow many 'BRUTUS NOODLES' would you like to buy? ");
					scanf("%f", &select2);
					OB1 = OB1 + select2 * 55.50;
					break;
					case 2:
					printf("\nHow many 'BRUTUS ARROZ CALDO' would you like to buy? ");
					scanf("%f", &select2);
					OB2 = OB2 + select2 * 59.75;
					break;
					case 3:
					printf("\nHow many 'BRUTUS PORK ADOBO RICE' would you like to buy? ");
					scanf("%f", &select2);
					OB3 = OB3 + select2 * 78.00;
					break;
					case 4:
					printf("\nHow many 'BRUTUS CRISPY CHICKEN FILLET' would you like to buy? ");
					scanf("%f", &select2);
					OB4 = OB4 + select2 * 87.25;
					break;
					case 5:
					printf("\nHow many 'BRUTUS SIZZLING FISH FILLET' would you like to buy? ");
					scanf("%f", &select2);
					OB5 = OB5 + select2 * 107.80;
					break;
					default:
					printf("\nSorry We do not have that on our list.\n");
				}
				cout << "\nWould you like to purchase again from the same shop? Y/N : ";
				cin >> choice;
				if (choice=='Y' || choice=='y')
				{
					select=0;
					x=1;
				}
				else if (choice=='N' || choice=='n')
				{
					x=0;
					g=1;
				}
                else
                {
                    cout << "\n\t\t\tYou have inputted invalid response!" << endl;
                }
			}
            break;
            case 11:
                y=1;
            break;
			default:
			cout << "\nYou have inputted wrong reponse" << endl;
		}
	}
    Sleep(500);
	double MFtotal = MF1+MF2+MF3+MF4+MF5;
	double Jtotal = J1+J2+J3+J4+J5;
	double Mtotal = M1+M2+M3+M4+M5;
	double LFtotal = LF1+LF2+LF3+LF4+LF5;
	double CKtotal = CK1+CK2+CK3+CK4+CK5;
	double Stotal = S1+S2+S3+S4+S5;
	double Shtotal  = Sh1+Sh2+Sh3+Sh4+Sh5;
	double KFCtotal = KFC1+KFC2+KFC3+KFC4+KFC5;
	double BKtotal = BK1+BK2+BK3+BK4+BK5;
	double OBtotal = OB1+OB2+OB3+OB4+OB5;
    if (g==1)
    {
        cout << "\n----------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\n\t\t\t\t\t     Order Summary:" << endl;
        if (MFtotal != 0)
        { 
            printf("\n\t\t\t\t\t    Manila FoodShoppe");
            printf("\n\n\t\t\tCORN SOUP..........................................Php %.2f", MF1);
            printf("\n\n\t\t\tLOMI...............................................Php %.2f", MF2);
            printf("\n\n\t\t\tWANTOK SOUP........................................Php %.2f", MF3);
            printf("\n\n\t\t\tBEEF STEAK.........................................Php %.2f", MF4);
            printf("\n\n\t\t\tBEEF CURRY.........................................Php %.2f", MF5);
            printf("\n\n\t\t\t\t\t\t\t\t    Total: Php %.2f", MFtotal);
            z=2;
        }
        else if (Jtotal != 0)
        {	
            printf("\n\t\t\t\t\t\tJollibee");
            printf("\n\n\t\t\t[1] 1PC BURGER STEAK...............................Php %.2f", J1);
            printf("\n\n\t\t\t[3] CHICKENJOY SOLO................................Php %.2f", J2);
            printf("\n\n\t\t\t[2] JOLLY SPAGHETTI FAMILY PAN.....................Php %.2f", J3);
            printf("\n\n\t\t\t[4] YUM BURGER SOLO................................Php %.2f", J4);
            printf("\n\n\t\t\t[5] JOLLY CRISPY FRIES BUCKET......................Php %.2f", J5);
            printf("\n\n\t\t\t\t\t\t\t\t    Total: Php %.2f", Jtotal);
            z=2;
        }
        else if (Mtotal != 0)
        {
            printf("\n\t\t\t\t\t\tMcDonald's");
            printf("\n\n\t\t\t[1] 6PC CHICKEN MCSHARE BOX........................Php %.2f", M1);
            printf("\n\n\t\t\t[2] CHICKEN MCDO SOLO..............................Php %.2f", M2);
            printf("\n\n\t\t\t[4] McCRISPY CHICKEN FILLET ALA KING SOLO..........Php %.2f", M3);
            printf("\n\n\t\t\t[3] McCRISPY CHICKEN SANDWHICH.....................Php %.2f", M4);
            printf("\n\n\t\t\t[5] BFF FRIES......................................Php %.2f", M5);
            printf("\n\n\t\t\t\t\t\t\t\t    Total: Php %.2f", Mtotal);
            z=2;
        }
        else if (LFtotal != 0)
        {
            printf("\n\t\t\t\t\t       La Fortuna");
            printf("\n\n\t\t\tBELGIUM PLAIN (4pc's)..............................Php %.2f", LF1);
            printf("\n\n\t\t\tBELGIUM UBE (4pc's)................................Php %.2f", LF2);
            printf("\n\n\t\t\tTIKOY WHITE........................................Php %.2f", LF3);
            printf("\n\n\t\t\tPIANONO............................................Php %.2f", LF4);
            printf("\n\n\t\t\tDICE HOPIA BIG.....................................Php %.2f", LF5);
            printf("\n\n\t\t\t\t\t\t\t\t    Total: Php %.2f", LFtotal);
            z=2;
        }
        else if (CKtotal != 0)
        {
            printf("\n\t\t\t\t\t\tChowking");
            printf("\n\n\t\t\tPORK CHAO FAN......................................Php %.2f", CK1);
            printf("\n\n\t\t\tBEEF CHAO FAN......................................Php %.2f", CK2);
            printf("\n\n\t\t\tCHINESE-STYLE FRIED CHICKEN........................Php %.2f", CK3);
            printf("\n\n\t\t\tSWEET 'n' SOUR PORK................................Php %.2f", CK4);
            printf("\n\n\t\t\tCHUNKY ASADO SIOPAO................................Php %.2f", CK5);
            printf("\n\n\t\t\t\t\t\t\t\t    Total: Php %.2f", CKtotal);
            z=2;
        }
        else if (Stotal != 0)
        {
            printf("\n\t\t\t\t\t\tShakey's");
            printf("\n\n\t\t\tLOUSIANA SHRIMP PIZZA..............................Php %.2f", S1);
            printf("\n\n\t\t\tSMOKED SALMON PIZZA................................Php %.2f", S2);
            printf("\n\n\t\t\tANGUS BURGER PIZZA.................................Php %.2f", S3);
            printf("\n\n\t\t\tSCALLOP PRIMO PIZZA................................Php %.2f", S4);
            printf("\n\n\t\t\tCHEESY CHICK'N PIZZA...............................Php %.2f", S5);
            printf("\n\n\t\t\t\t\t\t\t\t    Total: Php %.2f", Stotal);
            z=2;
        }
        else if (Shtotal != 0)
        {
            printf("\n\n\t\t\tWRAP BEEF SHAWARMA.................................Php %.2f", Sh1);
            printf("\n\n\t\t\tWRAP CHICKEN SHAWARMA..............................Php %.2f", Sh2);
            printf("\n\n\t\t\tSHAWARMA RICE (BEEF)...............................Php %.2f", Sh3);
            printf("\n\n\t\t\tSHAWARMA RICE (CHICKEN)............................Php %.2f", Sh4);
            printf("\n\n\t\t\tSHAWARMA NOODLES...................................Php %.2f", Sh5);
            printf("\n\n\t\t\t\t\t\t\t\t    Total: Php %.2f", Shtotal);
            z=2;
        }
        else if (KFCtotal != 0)
        {
            printf("\n\n\t\t\tCHICKEN AND SOUP...................................Php %.2f", KFC1);
            printf("\n\n\t\t\tREGULAR CHICKEN ALA CARTE..........................Php %.2f", KFC2);
            printf("\n\n\t\t\tCHRISTMAS BUCKET MEAL..............................Php %.2f", KFC3);
            printf("\n\n\t\t\tZINGER BURGER......................................Php %.2f", KFC4);
            printf("\n\n\t\t\tALA KING RICE BOWL MEAL............................Php %.2f", KFC5);
            printf("\n\n\t\t\t\t\t\t\t\t    Total: Php %.2f", KFCtotal);
            z=2;
        }
        else if (BKtotal != 0)
        {
            printf("\n\n\t\t\tHAMBURGER..........................................Php %.2f", BK1);
            printf("\n\n\t\t\tCHEESEBURGER.......................................Php %.2f", BK2);
            printf("\n\n\t\t\tDOUBLE WHOPPER.....................................Php %.2f", BK3);
            printf("\n\n\t\t\tDOUBLE QUARTER POUND KING BURGER...................Php %.2f", BK4);
            printf("\n\n\t\t\tBACON KING BURGER..................................Php %.2f", BK5);
            printf("\n\n\t\t\t\t\t\t\t\t    Total: Php %.2f", BKtotal);
            z=2;
        }
        else if (OBtotal != 0)
        {
            printf("\n\n\t\t\tBRUTUS NOODLES.....................................Php %.2f", OB1);
            printf("\n\n\t\t\tBRUTUS ARROZ CALDO.................................Php %.2f", OB2);
            printf("\n\n\t\t\tBRUTUS PORK ADOBO RICE.............................Php %.2f", OB3);
            printf("\n\n\t\t\tBRUTUS CRISPY CHICKEN FILLET.......................Php %.2f", OB4);
            printf("\n\n\t\t\tBRUTUS SIZZLING FISH FILLET........................Php %.2f", OB5);
            printf("\n\n\t\t\t\t\t\t\t\t    Total: Php %.2f", OBtotal);
            z=2;
        }
        else
        {
            cout << "You have not made any order/s!" << endl;
        }
    }
    if(z==2)
    {
        cout << "\n\n----------------------------------------------------------------------------------------------------------------" << endl;
        Sleep(1500);
        int method;
        int proceed;
        string oluser;
        string olpass;
        string bcardnum;
        string bname;
        string cvv;
    
        cout << "\n\n\t\t\t\t       Please Select Mode of Payment\n"<< endl;
        cout << "\n\t\t     (1)\t\t\t   (2)\t\t\t     (3)" << endl;
        cout << "\n\t\tOnline Payment       |\t      Bank Payment \t|\tCash on Delivery"<< endl;
        cout << "\n\nEnter Selected Number: ";
        cin >> method;
        cout << "\n\n----------------------------------------------------------------------------------------------------------------" << endl;
        switch (method)
        {
            case 1:
            cout << "\n\n\t\t\t\t   You've Selected Online Payment Option\n" << endl;
            cout << "\n\t\t\t\t\tPlease Select Payment Channel\n";
            cout << "\n\n\t\t\t\t\t\t[1] Gcash"<<endl;
            cout << "\n\t\t\t\t\t\t[2] Coins.ph"<<endl;
            cout << "\n\t\t\t\t\t\t[3] PayMaya"<<endl;
            cout << "\nEnter selected number: " << endl;
            cin >> select3;
            cout << "\n\n----------------------------------------------------------------------------------------------------------------" << endl;
            switch (select3)
            {
                case 1:
                cout << "\n\n\t\t\t\t\t  You've selected Gcash" << endl;
                a=1;
                break;
                case 2:
                cout << "\n\n\t\t\t\t\t  You've selected Coins.ph" << endl;
                a=1;
                break;
                case 3:
                cout << "\n\n\t\t\t\t\t  You've selected Paymaya" << endl;
                a=1;
                break;
                default:
                cout << "\n\t\t\t\t   Invalid Selected Payment Method!\n\n\n" << endl;
            }
            if (a==1)
                {
                    cout << "\n\n\t\t\t\t\tPlease login to your account:";
                    cout << "\n\n\t\t\t\tPhone Number: ";
                    cin >> oluser;
                    cout << "\n\t\t\t\tPassword: ";
                    cin >> olpass;
                    Sleep(1000);
                    cout << "\n\n\t\t\t\t\t      Authenticating..." << endl;
                    Sleep(1000);
                    cout << "\n\n\t\t\t\t\t    Successfully linked!" << endl;
                    Sleep(1000);
                    c=1;
                }
            break;
            case 2:
            cout << "\n\n\t\t\t\t   You've Selected Bank Payment Option\n" << endl;
            cout << "\n\t\t\t\t\tPlease Select Payment Channel\n";
            cout << "\n\n\t\t\t\t\t\t[1] BPI"<<endl;
            cout << "\n\t\t\t\t\t\t[2] BDO"<<endl;
            cout << "\n\t\t\t\t\t\t[3] Land Bank"<<endl;
            cout << "\n\t\t\t\t\t\t[4] China Bank"<<endl;
            cout << "\n\t\t\t\t\t\t[5] Metro Bank"<<endl;
            cout << "\nEnter selected number: " << endl;
            cin >> select3;
            switch (select3)
            {
                case 1:
                cout << "\n\n\t\t\t\t\t  You've selected BPI" << endl;
                b=1;
                break;
                case 2:
                cout << "\n\n\t\t\t\t\t  You've selected BDO" << endl;
                b=1;
                break;
                case 3:
                cout << "\n\n\t\t\t\t\t  You've selected Land Bank" << endl;
                b=1;
                break;
                case 4:
                cout << "\n\n\t\t\t\t\t  You've selected China Bank" << endl;
                b=1;
                break;
                case 5:
                cout << "\n\n\t\t\t\t\t  You've selected Metro Bank" << endl;
                b=1;
                break;
                default:
                cout << "\n\t\t\t\t   Invalid Selected Payment Method!\n\n\n" << endl;
            }
            if (b==1)
                {
                    cout << "\n\n\t\t\t\t\tPlease enter Bank Credentials:";
                    cout << "\n\n\t\t\t\tCard Number: ";
                    cin >> bcardnum;
                    cout << "\n\t\t\t\tName: ";
                    cin >> bname;
                    cout << "\n\t\t\t\tCVV/CVC: ";
                    cin >> cvv;
                    Sleep(1000);
                    cout << "\n\n\t\t\t\t\t      Authenticating..." << endl;
                    Sleep(1000);
                    cout << "\n\n\t\t\t\t\t    Successfully linked!" << endl;
                    Sleep(1000);
                    c=1;
                }
            break;
            case 3:
            cout << "\n\n\t\t\t\t   You've Selected Cash-on-Delivery Option\n" << endl;
            cout << "\n\t\t\t\tPlease pay the the total amount upon delivery.\n\n"<<endl;
            c=1;
            break;
             default:
            cout << "\n\t\t\tInputted number of instruction not assigned!" << endl;
        }
    }
    if (c==1)
    {    
        cout << "\n\n----------------------------------------------------------------------------------------------------------------" << endl;
        char confirm;
        if (u==1)
        {
            cout << "\n\t\t\t\t\tFood Delivery Addressed to:" << endl;
            cout << "\n\t\t\t\tName: " << regfname << " " << reglname << endl;
            cout << "\n\t\t\t\tEmail Address: " << regeaddress << endl;
            cout << "\n\t\t\t\tAddress/es: " << regaddress1 << endl;
            cout << "\n\t\t\t\t\t    "<< regaddress2 << endl;
            cout << "\n\t\t\t\tContact Number: " << regnum << endl;
        }
        else if (u==2)
        {
            cout << "\n\t\t\t\t\t  Food Delivery Addressed to:" << endl;
            cout << "\n\t\t\t\tName: " << deffname << " " << deflname << endl;
            cout << "\n\t\t\t\tEmail Address: " << defeaddress << endl;
            cout << "\n\t\t\t\tAddress/es: " << defaddress1 << endl;
            cout << "\n\t\t\t\t\t    " << defaddress2 << endl;
            cout << "\n\t\t\t\tContact Number: " << defnum << endl;
        }
        cout<<"\n\nDo you wish to Confirm? Y/N: ";
        cin>>confirm;
        if (confirm=='Y' || confirm=='y')
        {
        cout << "\n\n\t\t\t\t\t    Thank You for Ordering!" << endl;
        cout << "\n\t\t     Please wait for your food to be Delivered, our Monkey Driver is on its way!\n\n" << endl;
        
        r=0;
        }
        else if (confirm=='N' || confirm=='n')
        {
            cout << "\nDo you wish to cancel current order and go back to Main Page (Y)? Otherwise redirects you back to Payment page (N) :  ";
            cin >> confirm;
            cout << "\n\n";
            if (confirm=='Y' || confirm=='y')
            {
                r++;
                y=1;
            }
            else if (confirm=='N' || confirm=='n')
            {
                c=0;
                z=0;
            }
        }
        else
        {
            cout << "\n\t\t\t\t   You inputted response is Invalid\n\n\n" << endl;
        }
    }
}
return 0;
}
