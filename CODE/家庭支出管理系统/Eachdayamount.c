#include "Familyamountsystem.h"
void Eachdayamount(Node* head)
{
	dateMenu();//�˵�
	int time;
	scanf_s("%d", &time);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time == time)
		{
			printf("��%d��\n������%s\nʳ�%.2f\n���%.2f\n���У�%.2f\n���֣�%.2f\n������%.2f\n��֧����%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);

			printf("\n");

		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
}