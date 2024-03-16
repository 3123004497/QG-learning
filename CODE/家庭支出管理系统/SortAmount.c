#include "Familyamountsystem.h"
//排序

//按支出类型
void Sortfood(Node* head)//食物
{
	
	Node* save = NULL;
	Node* move = NULL;
	for (Node* turn = head->next; turn->next != NULL; turn = turn->next)
	{
		for (move = head->next; move->next != save; move = move->next)
		{
			if (move->person.food < move->next->person.food)
			{
				Person temp = move->person;
				move->person = move->next->person;
				move->next->person = temp;
			}
		}
		save = move;
	}

}
void printfood(Node*head)
{

	dateMenu();//菜单
	int time;
	scanf_s("%d", &time);
	system("cls");//清空控制台
	Node* move = head->next;
	while (move ->next!= NULL)
	{
		if (move->person.time == time)
		{
			printf("第%d天   %s  食物：%.2f\n", move->person.time, move->person.name, move->person.food);
			
			
		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台


	
}
void Sortshopping(Node* head)//购物
{

	Node* save = NULL;
	Node* move = NULL;
	for (Node* turn = head->next; turn->next != NULL; turn = turn->next)
	{
		for (move = head->next; move->next != save; move = move->next)
		{
			if (move->person.shopping < move->next->person.shopping)
			{
				Person temp = move->person;
				move->person = move->next->person;
				move->next->person = temp;
			}
		}
		save = move;
	}

}
void printshopping(Node* head)
{
	dateMenu();//菜单
	int time;
	scanf_s("%d", &time);
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time == time)
		{
			printf("第%d天   %s  购物：%.2f\n", move->person.time, move->person.name, move->person.shopping);
		

		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
void Sorttransportation(Node* head)//出行 
{

	Node* save = NULL;
	Node* move = NULL;
	for (Node* turn = head->next; turn->next != NULL; turn = turn->next)
	{
		for (move = head->next; move->next != save; move = move->next)
		{
			if (move->person.transportation < move->next->person.transportation)
			{
				Person temp = move->person;
				move->person = move->next->person;
				move->next->person = temp;
			}
		}
		save = move;
	}

}
void printtransportation(Node* head)
{
	dateMenu();//菜单
	int time;
	scanf_s("%d", &time);
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time == time)
		{
			printf("第%d天   %s  出行：%.2f\n", move->person.time, move->person.name, move->person.transportation);
			

		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
void Sortentertainment(Node* head)//娱乐 
{

	Node* save = NULL;
	Node* move = NULL;
	for (Node* turn = head->next; turn->next != NULL; turn = turn->next)
	{
		for (move = head->next; move->next != save; move = move->next)
		{
			if (move->person.entertainment < move->next->person.entertainment)
			{
				Person temp = move->person;
				move->person = move->next->person;
				move->next->person = temp;
			}
		}
		save = move;
	}

}
void printentertainment(Node* head)
{
	dateMenu();//菜单
	int time;
	scanf_s("%d", &time);
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time == time)
		{
			printf("第%d天   %s  娱乐：%.2f\n", move->person.time, move->person.name, move->person.entertainment);
			

		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
void Sortother(Node* head)//其它
{

	Node* save = NULL;
	Node* move = NULL;
	for (Node* turn = head->next; turn->next != NULL; turn = turn->next)
	{
		for (move = head->next; move->next != save; move = move->next)
		{
			if (move->person.others < move->next->person.others)
			{
				Person temp = move->person;
				move->person = move->next->person;
				move->next->person = temp;
			}
		}
		save = move;
	}

}
void printother(Node* head)
{
	dateMenu();//菜单
	int time;
	scanf_s("%d", &time);
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time == time)
		{
			printf("第%d天   %s  其它：%.2f\n", move->person.time, move->person.name, move->person.others);
			

		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
//按成员
void printperson1(Node* head)
{
	dateMenu();//菜单
	int time;
	char name[30] = "钟离";
	scanf_s("%d", &time);
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (strcmp(move->person.name, name, sizeof(name)) == 0)
		{
			if (move->person.time == time)
			{


				printf("第%d天\n姓名：%s\n食物：%.2f\n购物：%.2f\n出行：%.2f\n娱乐：%.2f\n其它：%.2f\n总支出：%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);


			}
		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
void printperson2(Node* head)
{
	dateMenu();//菜单
	int time;
	char name[30] = "胡桃";
	scanf_s("%d", &time);
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (strcmp(move->person.name, name, sizeof(name)) == 0)
		{
			if (move->person.time == time)
			{


				printf("第%d天\n姓名：%s\n食物：%.2f\n购物：%.2f\n出行：%.2f\n娱乐：%.2f\n其它：%.2f\n总支出：%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);


			}
		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
void printperson3(Node* head)
{
	dateMenu();//菜单
	int time;
	char name[30] = "七七";
	scanf_s("%d", &time);
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (strcmp(move->person.name, name, sizeof(name)) == 0)
		{
			if (move->person.time == time)
			{


				printf("第%d天\n姓名：%s\n食物：%.2f\n购物：%.2f\n出行：%.2f\n娱乐：%.2f\n其它：%.2f\n总支出：%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);


			}
		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
void printperson4(Node* head)
{
	dateMenu();//菜单
	int time;
	char name[30] = "甘雨";
	scanf_s("%d", &time);
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (strcmp(move->person.name, name, sizeof(name)) == 0)
		{
			if (move->person.time == time)
			{


				printf("第%d天\n姓名：%s\n食物：%.2f\n购物：%.2f\n出行：%.2f\n娱乐：%.2f\n其它：%.2f\n总支出：%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);


			}
		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}
//按总金额
void SortTotalamount(Node* head)
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
void printTotalamount(Node* head)
{

	dateMenu();//菜单
	int time;
	scanf_s("%d", &time);
	system("cls");//清空控制台
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time == time)
		{
			printf("第%d天   %s  总支出：%.2f\n", move->person.time, move->person.name, move->person.total_amount);


		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台

}
void SortTypeTotal(Node*head)
{
	dateMenu();//菜单
	int time;
	scanf_s("%d", &time);
	system("cls");//清空控制台
	float FoodTotal=0;
	float ShoppingTotal = 0;
	float Transportation = 0;
	float EntertainmentTotal = 0;
	float OthersTotal = 0;

	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time == time)
		{
			FoodTotal += move->person.food;
			ShoppingTotal += move->person.shopping;
			Transportation += move->person.transportation;
			EntertainmentTotal += move->person.entertainment;
			OthersTotal += move->person.others;
		}
		move = move->next;
	}
	printf("第%d天\n",time);
	printf("食物总支出：%.2f\n购物总支出：%.2f\n出行总支出：%.2f\n娱乐总支出：%.2f\n其它总支出：%.2f\n", FoodTotal, ShoppingTotal, Transportation, EntertainmentTotal, OthersTotal);
	system("pause");
	system("cls");//清空控制台
}


