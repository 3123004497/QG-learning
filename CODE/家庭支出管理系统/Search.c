#include "Familyamountsystem.h"

void Search(Node*head)
{
	 Sortfood( head);//電會
	 Sortshopping( head);
	 Sorttransportation(head);
	 Sortentertainment( head);
	 Sortother( head);
	int sch;
	SearchMenu();
	sch = _getch();
	system("cls");//賠腎陣崙岬
		switch (sch)
		{
		case '0':
			printf("厮曜竃\n");
			break;
		case '1'://梓屶竃窃侏
			SearchType(head);
			
			break;
		case '2'://梓撹埀
			SearchPerson(head);
			break;
		case '3'://悳署駆
			SearchTotalamount(head);
			break;
		default:
			printf("萩補秘0-4寂議方忖\n");
			break;
		}
}
void SearchMenu()
{
	printf("！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！\n");
	printf("萩僉夲臥儂議圭塀��\n");
	printf("1.梓屶竃窃侏   2.梓撹埀   3.悳署駆   0.曜竃\n");
	printf("！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！\n");
	printf("\n");

}
void dateMenu()
{
	printf("！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！\n");
	printf("萩補秘勣臥儂及叱爺��補秘方忖��旺指概��\n");
	printf("！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！\n");
	printf("\n");
	
}
void chooseDay(Node* head)
{
	dateMenu();//暇汽
	int time;
	scanf_s("%d", &time);
	system("cls");//賠腎陣崙岬
	Node* move = head->next;
	while (move != NULL)
	{
		if (move->person.time == time)
		{
			printf("及%d爺   %s  奮麗��%.2f\n", move->person.time, move->person.name, move->person.food);
			printf("\n");
			
		}
		move = move->next;
		
	}
	system("pause");
	system("cls");//賠腎陣崙岬
	
}
void printTypeMenu()
{
	printf("！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！\n");
	printf("萩僉夲勣臥孀議窃侏��\n");
	printf("1.奮麗   2.杭麗   3.竃佩   4.嚔赤   5.凪万   0.曜竃\n");
	printf("！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！\n");
	printf("\n");
}
void SearchType(Node*head)
{
		Node* move = head->next;
		while (1)
		{
			printTypeMenu();
			char schtype = _getch();
			system("cls");//賠腎陣崙岬
			switch (schtype)
			{
			case '0':
				printf("厮曜竃\n");
				return;
			case '1'://奮麗
				while (move != NULL)
				{
					Sortfood(head);
					printfood(head);
					break;
				}
				break;
			case '2'://杭麗
				while (move != NULL)
				{
					Sortshopping(head);
					printshopping(head);
					break;
				}
				break;
			case '3'://竃佩
				while (move != NULL)
				{
					
					Sorttransportation(head);
					printtransportation( head);
					break;
				}
				break;
			case '4'://嚔赤
				while (move != NULL)
				{
					
					Sortentertainment( head);
					printentertainment( head);
					break;
				}
				break;
			case '5'://凪万
				while (move != NULL)
				{
					Sortother(head);
					printother( head);
					break;
				}
				break;
			default:
				printf("萩補秘0-5寂議方忖\n");
				break;
			}
			
		}
		system("pause");
		system("cls");//賠腎陣崙岬
		
}
void printPersonMenu()
{
	printf("！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！\n");
	printf("萩僉夲勣臥孀議撹埀��\n");
	printf("1.嶝宣   2.鮭孟   3.鈍鈍   4.己嚏   0.曜竃\n");
	printf("！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！\n");
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
			printf("厮曜竃\n");
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
			printf("萩補秘0-4寂議方忖\n");
			break;
		}
	}
	system("pause");
	system("cls");//賠腎陣崙岬
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
			printf("厮曜竃\n");
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
			printf("萩補秘0-2寂議方忖\n");
			break;
		}
	}
	system("pause");
	system("cls");//賠腎陣崙岬

}
void printTotalamountMenu()
{
	printf("！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！\n");
	printf("萩僉夲勣臥孀議悳署駆窃侏��\n");
	printf("1.耽嶽屶竃   2.悳屶竃   0.曜竃\n");
	printf("！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！\n");
	printf("\n");
}


