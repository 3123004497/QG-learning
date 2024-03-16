#include "Familyamountsystem.h"
void Eachdayamount(Node* head)
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
			printf("第%d天\n姓名：%s\n食物：%.2f\n购物：%.2f\n出行：%.2f\n娱乐：%.2f\n其它：%.2f\n总支出：%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);

			printf("\n");

		}
		move = move->next;

	}
	system("pause");
	system("cls");//清空控制台
}