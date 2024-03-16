#include "Familyamountsystem.h"

void HistoricalData(Node* head)
{

	int Hstry;
	printHistoricalDataMenu();
	Hstry = _getch();
	system("cls");//清空控制台
	
	switch (Hstry)
	{
	case '0':
		printf("已退出\n");
		break;
	case '1'://历史数据
		printmessage(head);

		break;
	case '2'://.历史数据统计
		EachWeekData( head);
		break;
	case '3'://历史数据查询
		HstrySearch( head);
		break;

	default:
		printf("请输入0-3间的数字\n");
		break;
	}
}

void printmessage(Node* head)//历史数据（全部）
{
	Node* move = head->next;
	while (move != NULL)
	{
		printf("第%d天\n姓名：%s\n食物：%.2f\n购物：%.2f\n出行：%.2f\n娱乐：%.2f\n其它：%.2f\n总支出：%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);

		printf("\n");
		move = move->next;

	}
	system("pause");//暂停
	system("cls");//清空
}
void printHistoricalDataMenu()
{
	printf("————————————————————————————————————————————————————————————————————————————\n");
	printf("请选择查询的方式；\n");
	printf("1.历史数据（全部）   2.历史数据统计   3.历史数据查询   0.退出\n");
	printf("————————————————————————————————————————————————————————————————————————————\n");
	printf("\n");
}
void EachWeekData(Node* head)//历史数据统计
{
	Node* move = head->next;
	while (1)
	{
		printEachWeekDataMenu();
		char Weektype = _getch();
		system("cls");//清空控制台
		switch (Weektype)
		{
		case '0':
			printf("已退出\n");
			return;
		case '1'://食物
			while (move != NULL)
			{
				printfood_Week(head);
				break;
			}
			break;
		case '2'://购物
			while (move != NULL)
			{
				printshopping_Week( head);
				break;
			}
			break;
		case '3'://出行
			while (move != NULL)
			{
				printtransportation_Week(head);
				break;
			}
			break;
		case '4'://娱乐
			while (move != NULL)
			{
				printentertainment_Week(head);
				break;
			}
			break;
		case '5'://其它
			while (move != NULL)
			{
				printother_Week(head);
				break;
			}
			break;
		case '6'://每个成员
			while (move != NULL)
			{
				eachperson_Week(head);
				break;
			}
			break;
		default:
			printf("请输入0-6间的数字\n");
			break;
		}

	}
	system("pause");
	system("cls");//清空控制台
}
void HstrySearch(Node* head)//历史数据查询/////////////////////////////////////////////////////////////////////////////////////////
{
	Sortfood(head);//排序
	Sortshopping(head);
	Sorttransportation(head);
	Sortentertainment(head);
	Sortother(head);


	int sch;
	SearchMenu();
	sch = _getch();

	system("cls");//清空控制台
	//scanf_s("%d", &sch);
	switch (sch)
	{
	case '0':
		printf("已退出\n");
		break;
	case '1'://按支出类型
		SearchType_Week(head);
		break;
	case '2'://按成员
		SearchPerson_Week(head);
		break;
	case '3'://总金额
		SearchTotalamount_Week(head);
		break;

	default:
		printf("请输入0-4间的数字\n");
		break;
	}

}
void printEachWeekDataMenu()
{
	printf("————————————————————————————————————————————————————————————————————————————\n");
	printf("请选择查询的类型；\n");
	printf("1.食物   2.购物   3.出行   4.娱乐   5.其它   6.每个成员    0.退出\n");
	printf("————————————————————————————————————————————————————————————————————————————\n");
	printf("\n");
}
void printWeekMenu()
{
	printf("————————————————————————————————————————————————————————————————————————————\n");
	printf("请输入要查询第几周（输入数字）并回车；\n");
	printf("————————————————————————————————————————————————————————————————————————————\n");
	printf("\n");
}
void printfood_Week(Node* head)
{

	printWeekMenu();//时间菜单
	int week;
	scanf_s("%d", &week);
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time >7*(week-1)&& move->person.time<=7*week)
		{
			printf("第%d天   %s  食物：%.2f\n", move->person.time, move->person.name, move->person.food);
		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
void printshopping_Week(Node* head)
{

	printWeekMenu();//时间菜单
	int week;
	scanf_s("%d", &week);
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
		{
			printf("第%d天   %s  购物：%.2f\n", move->person.time, move->person.name, move->person.shopping);
		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
void printtransportation_Week(Node* head)
{

	printWeekMenu();//时间菜单
	int week;
	scanf_s("%d", &week);
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
		{
			printf("第%d天   %s  出行：%.2f\n", move->person.time, move->person.name, move->person.transportation);
		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
void printentertainment_Week(Node* head)
{

	printWeekMenu();//时间菜单
	int week;
	scanf_s("%d", &week);
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
		{
			printf("第%d天   %s  娱乐：%.2f\n", move->person.time, move->person.name, move->person.entertainment);
		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
void printother_Week(Node* head)
{

	printWeekMenu();//时间菜单
	int week;
	scanf_s("%d", &week);
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
		{
			printf("第%d天   %s  娱乐：%.2f\n", move->person.time, move->person.name, move->person.others);
		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
void eachperson_Week(Node* head)
{
	Node* move = head->next;
	while (1)
	{
		printPersonMenu();
		char schperson = _getch();
		switch (schperson)
		{
		case '0':
			printf("已退出\n");
			return;
		case'1':
			while (move != NULL)
			{
				printperson1_Week(head);
				break;
			}
			break;
		case'2':
			while (move != NULL)
			{
				printperson2_Week(head);
				break;
			}

			break;
		case'3':
			while (move != NULL)
			{
				printperson3_Week(head);
				break;
			}
			break;
		case'4':
			while (move != NULL)
			{
				printperson4_Week(head);
				break;
			}
			break;

		default:
			printf("请输入0-4间的数字\n");
			break;
		}
	}
	system("pause");
	system("cls");//清空控制台
}
void printperson1_Week(Node* head)
{
	printWeekMenu();//时间菜单
	int week;
	scanf_s("%d", &week);
	char name[30] = "钟离";
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (strcmp(move->person.name, name, sizeof(name)) == 0)
		{
			if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
			{
				printf("第%d天\n姓名：%s\n食物：%.2f\n购物：%.2f\n出行：%.2f\n娱乐：%.2f\n其它：%.2f\n总支出：%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);

			}
		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
void printperson2_Week(Node* head)
{
	printWeekMenu();//时间菜单
	int week;
	scanf_s("%d", &week);
	char name[30] = "胡桃";
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (strcmp(move->person.name, name, sizeof(name)) == 0)
		{
			if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
			{
				printf("第%d天\n姓名：%s\n食物：%.2f\n购物：%.2f\n出行：%.2f\n娱乐：%.2f\n其它：%.2f\n总支出：%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);

			}
		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
void printperson3_Week(Node* head)
{
	printWeekMenu();//时间菜单
	int week;
	scanf_s("%d", &week);
	char name[30] = "七七";
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (strcmp(move->person.name, name, sizeof(name)) == 0)
		{
			if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
			{
				printf("第%d天\n姓名：%s\n食物：%.2f\n购物：%.2f\n出行：%.2f\n娱乐：%.2f\n其它：%.2f\n总支出：%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);

			}
		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
void printperson4_Week(Node* head)
{
	printWeekMenu();//时间菜单
	int week;
	scanf_s("%d", &week);
	char name[30] = "甘雨";
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (strcmp(move->person.name, name, sizeof(name)) == 0)
		{
			if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
			{
				printf("第%d天\n姓名：%s\n食物：%.2f\n购物：%.2f\n出行：%.2f\n娱乐：%.2f\n其它：%.2f\n总支出：%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);

			}
		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
void SearchTotalamount_Week(Node* head)
{
	Node* move = head->next;
	while (1)
	{
		printTotalamountMenu();
		char schtatol = _getch();
		switch (schtatol)
		{
		case '0':
			printf("已退出\n");
			return;
		case'1':
			while (move != NULL)
			{
				SortTypeTotal_Week(head);
				break;
			}
			break;

		case'2':
			while (move != NULL)
			{
				SortTotalamount_Week(head);
				printTotalamount_Week(head);
				break;
			}
			break;

		default:
			printf("请输入0-2间的数字\n");
			break;
		}
	}
	system("pause");
	system("cls");//清空控制台
}
void SortTypeTotal_Week(Node* head)
{
	printWeekMenu();//时间菜单
	int week;
	scanf_s("%d", &week);
	system("cls");//清空控制台
	float FoodTotal = 0;
	float ShoppingTotal = 0;
	float Transportation = 0;
	float EntertainmentTotal = 0;
	float OthersTotal = 0;

	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
		{
			FoodTotal += move->person.food;
			ShoppingTotal += move->person.shopping;
			Transportation += move->person.transportation;
			EntertainmentTotal += move->person.entertainment;
			OthersTotal += move->person.others;
		}
		move = move->next;
	}
	printf("第%d周\n", week);
	printf("食物总支出：%.2f\n购物总支出：%.2f\n出行总支出：%.2f\n娱乐总支出：%.2f\n其它总支出：%.2f\n", FoodTotal, ShoppingTotal, Transportation, EntertainmentTotal, OthersTotal);
	system("pause");
	system("cls");//清空控制台
}
void SortTotalamount_Week(Node* head)
{

		Node* save = NULL;
		Node* move = NULL;
		for (Node* turn = head->next; turn->next != NULL; turn = turn->next)
		{
			for (move = head->next; move->next != save; move = move->next)
			{
				if (move->person.total_amount < move->next->person.total_amount)
				{
					Person temp = move->person;
					move->person = move->next->person;
					move->next->person = temp;
				}
			}
			save = move;
		}

	
}
void printTotalamount_Week(Node* head)
{
	printWeekMenu();//时间菜单
	int week;
	scanf_s("%d", &week);
	system("cls");//清空控制台
	float Totalamount_Week = 0;
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
		{

			Totalamount_Week += move->person.total_amount;
		}
		move = move->next;

	}
	printf("第%d天   %s  总支出：%.2f\n", move->person.time, move->person.name, Totalamount_Week);
	system("pause");
	system("cls");//清空控制台
}
void SearchType_Week(Node* head)
{
	Node* move = head->next;
	while (1)
	{
		printTypeMenu();
		char schtype = _getch();
		system("cls");//清空控制台
		switch (schtype)
		{
		case '0':
			printf("已退出\n");
			return;
		case '1'://食物
			while (move != NULL)
			{
				Sortfood(head);
				printfood_Week(head);
				break;
			}
			break;
		case '2'://购物
			while (move != NULL)
			{
				Sortshopping(head);
				printshopping_Week(head);
				break;
			}
			break;
		case '3'://出行
			while (move != NULL)
			{

				Sorttransportation(head);
				printtransportation_Week(head);
				break;
			}
			break;
		case '4'://娱乐
			while (move != NULL)
			{

				Sortentertainment(head);
				printentertainment_Week(head);
				break;
			}
			break;
		case '5'://其它
			while (move != NULL)
			{
				Sortother(head);
				printother_Week(head);
				break;
			}
			break;
		default:
			printf("请输入0-5间的数字\n");
			break;
		}

	}
	system("pause");
	system("cls");//清空控制台
}
void SearchPerson_Week(Node* head)
{
	Node* move = head->next;
	while (1)
	{
		printPersonMenu();
		char schperson = _getch();
		switch (schperson)
		{
		case '0':
			printf("已退出\n");
			return;
		case'1':
			while (move != NULL)
			{
				printperson1_Week(head);
				break;
			}
			break;
		case'2':
			while (move != NULL)
			{
				printperson2_Week(head);
				break;
			}

			break;
		case'3':
			while (move != NULL)
			{
				printperson3_Week(head);
				break;
			}
			break;
		case'4':
			while (move != NULL)
			{
				printperson4_Week(head);
				break;
			}
			break;

		default:
			printf("请输入0-4间的数字\n");
			break;
		}
	}
	system("pause");
	system("cls");//清空控制台
}
