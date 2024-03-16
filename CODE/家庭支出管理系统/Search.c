#include "Familyamountsystem.h"

void Search(Node*head)
{
	 Sortfood( head);//ÅÅÐò
	 Sortshopping( head);
	 Sorttransportation(head);
	 Sortentertainment( head);
	 Sortother( head);
	int sch;
	SearchMenu();
	sch = _getch();
	system("cls");//Çå¿Õ¿ØÖÆÌ¨
		switch (sch)
		{
		case '0':
			printf("ÒÑÍË³ö\n");
			break;
		case '1'://°´Ö§³öÀàÐÍ
			SearchType(head);
			
			break;
		case '2'://°´³ÉÔ±
			SearchPerson(head);
			break;
		case '3'://×Ü½ð¶î
			SearchTotalamount(head);
			break;
		default:
			printf("ÇëÊäÈë0-4¼äµÄÊý×Ö\n");
			break;
		}
}
void SearchMenu()
{
	printf("¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
	printf("ÇëÑ¡Ôñ²éÑ¯µÄ·½Ê½£»\n");
	printf("1.°´Ö§³öÀàÐÍ   2.°´³ÉÔ±   3.×Ü½ð¶î   0.ÍË³ö\n");
	printf("¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
	printf("\n");

}
void dateMenu()
{
	printf("¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
	printf("ÇëÊäÈëÒª²éÑ¯µÚ¼¸Ìì£¨ÊäÈëÊý×Ö£©²¢»Ø³µ£»\n");
	printf("¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
	printf("\n");
	
}
void chooseDay(Node* head)
{
	dateMenu();//²Ëµ¥
	int time;
	scanf_s("%d", &time);
	system("cls");//Çå¿Õ¿ØÖÆÌ¨
	Node* move = head->next;
	while (move != NULL)
	{
		if (move->person.time == time)
		{
			printf("µÚ%dÌì   %s  Ê³Îï£º%.2f\n", move->person.time, move->person.name, move->person.food);
			printf("\n");
			
		}
		move = move->next;
		
	}
	system("pause");
	system("cls");//Çå¿Õ¿ØÖÆÌ¨
	
}
void printTypeMenu()
{
	printf("¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
	printf("ÇëÑ¡ÔñÒª²éÕÒµÄÀàÐÍ£º\n");
	printf("1.Ê³Îï   2.¹ºÎï   3.³öÐÐ   4.ÓéÀÖ   5.ÆäËü   0.ÍË³ö\n");
	printf("¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
	printf("\n");
}
void SearchType(Node*head)
{
		Node* move = head->next;
		while (1)
		{
			printTypeMenu();
			char schtype = _getch();
			system("cls");//Çå¿Õ¿ØÖÆÌ¨
			switch (schtype)
			{
			case '0':
				printf("ÒÑÍË³ö\n");
				return;
			case '1'://Ê³Îï
				while (move != NULL)
				{
					Sortfood(head);
					printfood(head);
					break;
				}
				break;
			case '2'://¹ºÎï
				while (move != NULL)
				{
					Sortshopping(head);
					printshopping(head);
					break;
				}
				break;
			case '3'://³öÐÐ
				while (move != NULL)
				{
					
					Sorttransportation(head);
					printtransportation( head);
					break;
				}
				break;
			case '4'://ÓéÀÖ
				while (move != NULL)
				{
					
					Sortentertainment( head);
					printentertainment( head);
					break;
				}
				break;
			case '5'://ÆäËü
				while (move != NULL)
				{
					Sortother(head);
					printother( head);
					break;
				}
				break;
			default:
				printf("ÇëÊäÈë0-5¼äµÄÊý×Ö\n");
				break;
			}
			
		}
		system("pause");
		system("cls");//Çå¿Õ¿ØÖÆÌ¨
		
}
void printPersonMenu()
{
	printf("¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
	printf("ÇëÑ¡ÔñÒª²éÕÒµÄ³ÉÔ±£º\n");
	printf("1.ÖÓÀë   2.ºúÌÒ   3.ÆßÆß   4.¸ÊÓê   0.ÍË³ö\n");
	printf("¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
	printf("\n");
}
void SearchPerson(Node* head)
{
	Node* move = head->next;
	while (1)
	{
		printPersonMenu();
		char schperson = _getch();
		switch (schperson)
		{
		case '0':
			printf("ÒÑÍË³ö\n");
			return;
		case'1':
			while (move != NULL)
			{
				printperson1(head);
				break;
			}
			break;
		case'2':
			while (move != NULL)
			{
				printperson2(head);
				break;
			}

			break;
		case'3':
			while (move != NULL)
			{
				printperson3(head);
				break;
			}
			break;
		case'4':
			while (move != NULL)
			{
				printperson4(head);
				break;
			}
			break;

		default:
			printf("ÇëÊäÈë0-4¼äµÄÊý×Ö\n");
			break;
		}
	}
	system("pause");
	system("cls");//Çå¿Õ¿ØÖÆÌ¨
}
void SearchTotalamount(Node* head)
{
	Node* move = head->next;

	while (1)
	{
		printTotalamountMenu();
		char schtatol= _getch();
		switch (schtatol)
		{
		case '0':
			printf("ÒÑÍË³ö\n");
			return;
		case'1':
			while (move != NULL)
			{
				SortTypeTotal(head);
				break;
			}
			break;
		
		case'2':
			while (move != NULL)
			{
				SortTotalamount(head);
				printTotalamount(head);
				break;
			}
			break;

		default:
			printf("ÇëÊäÈë0-2¼äµÄÊý×Ö\n");
			break;
		}
	}
	system("pause");
	system("cls");//Çå¿Õ¿ØÖÆÌ¨

}
void printTotalamountMenu()
{
	printf("¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
	printf("ÇëÑ¡ÔñÒª²éÕÒµÄ×Ü½ð¶îÀàÐÍ£º\n");
	printf("1.Ã¿ÖÖÖ§³ö   2.×ÜÖ§³ö   0.ÍË³ö\n");
	printf("¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
	printf("\n");
}


