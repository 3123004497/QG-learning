#include "Familyamountsystem.h"
//����

//��֧������
void Sortfood(Node* head)//ʳ��
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

	dateMenu();//�˵�
	int time;
	scanf_s("%d", &time);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move ->next!= NULL)
	{
		if (move->person.time == time)
		{
			printf("��%d��   %s  ʳ�%.2f\n", move->person.time, move->person.name, move->person.food);
			
			
		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨


	
}
void Sortshopping(Node* head)//����
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
	dateMenu();//�˵�
	int time;
	scanf_s("%d", &time);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time == time)
		{
			printf("��%d��   %s  ���%.2f\n", move->person.time, move->person.name, move->person.shopping);
		

		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
}
void Sorttransportation(Node* head)//���� 
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
	dateMenu();//�˵�
	int time;
	scanf_s("%d", &time);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time == time)
		{
			printf("��%d��   %s  ���У�%.2f\n", move->person.time, move->person.name, move->person.transportation);
			

		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
}
void Sortentertainment(Node* head)//���� 
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
	dateMenu();//�˵�
	int time;
	scanf_s("%d", &time);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time == time)
		{
			printf("��%d��   %s  ���֣�%.2f\n", move->person.time, move->person.name, move->person.entertainment);
			

		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
}
void Sortother(Node* head)//����
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
	dateMenu();//�˵�
	int time;
	scanf_s("%d", &time);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time == time)
		{
			printf("��%d��   %s  ������%.2f\n", move->person.time, move->person.name, move->person.others);
			

		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
}
//����Ա
void printperson1(Node* head)
{
	dateMenu();//�˵�
	int time;
	char name[30] = "����";
	scanf_s("%d", &time);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (strcmp(move->person.name, name, sizeof(name)) == 0)
		{
			if (move->person.time == time)
			{


				printf("��%d��\n������%s\nʳ�%.2f\n���%.2f\n���У�%.2f\n���֣�%.2f\n������%.2f\n��֧����%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);


			}
		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
}
void printperson2(Node* head)
{
	dateMenu();//�˵�
	int time;
	char name[30] = "����";
	scanf_s("%d", &time);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (strcmp(move->person.name, name, sizeof(name)) == 0)
		{
			if (move->person.time == time)
			{


				printf("��%d��\n������%s\nʳ�%.2f\n���%.2f\n���У�%.2f\n���֣�%.2f\n������%.2f\n��֧����%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);


			}
		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
}
void printperson3(Node* head)
{
	dateMenu();//�˵�
	int time;
	char name[30] = "����";
	scanf_s("%d", &time);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (strcmp(move->person.name, name, sizeof(name)) == 0)
		{
			if (move->person.time == time)
			{


				printf("��%d��\n������%s\nʳ�%.2f\n���%.2f\n���У�%.2f\n���֣�%.2f\n������%.2f\n��֧����%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);


			}
		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
}
void printperson4(Node* head)
{
	dateMenu();//�˵�
	int time;
	char name[30] = "����";
	scanf_s("%d", &time);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (strcmp(move->person.name, name, sizeof(name)) == 0)
		{
			if (move->person.time == time)
			{


				printf("��%d��\n������%s\nʳ�%.2f\n���%.2f\n���У�%.2f\n���֣�%.2f\n������%.2f\n��֧����%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);


			}
		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
}
//���ܽ��
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

	dateMenu();//�˵�
	int time;
	scanf_s("%d", &time);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time == time)
		{
			printf("��%d��   %s  ��֧����%.2f\n", move->person.time, move->person.name, move->person.total_amount);


		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨

}
void SortTypeTotal(Node*head)
{
	dateMenu();//�˵�
	int time;
	scanf_s("%d", &time);
	system("cls");//��տ���̨
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
	printf("��%d��\n",time);
	printf("ʳ����֧����%.2f\n������֧����%.2f\n������֧����%.2f\n������֧����%.2f\n������֧����%.2f\n", FoodTotal, ShoppingTotal, Transportation, EntertainmentTotal, OthersTotal);
	system("pause");
	system("cls");//��տ���̨
}


