#include "Familyamountsystem.h"

void HistoricalData(Node* head)
{

	int Hstry;
	printHistoricalDataMenu();
	Hstry = _getch();
	system("cls");//��տ���̨
	
	switch (Hstry)
	{
	case '0':
		printf("���˳�\n");
		break;
	case '1'://��ʷ����
		printmessage(head);

		break;
	case '2'://.��ʷ����ͳ��
		EachWeekData( head);
		break;
	case '3'://��ʷ���ݲ�ѯ
		HstrySearch( head);
		break;

	default:
		printf("������0-3�������\n");
		break;
	}
}

void printmessage(Node* head)//��ʷ���ݣ�ȫ����
{
	Node* move = head->next;
	while (move != NULL)
	{
		printf("��%d��\n������%s\nʳ�%.2f\n���%.2f\n���У�%.2f\n���֣�%.2f\n������%.2f\n��֧����%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);

		printf("\n");
		move = move->next;

	}
	system("pause");//��ͣ
	system("cls");//���
}
void printHistoricalDataMenu()
{
	printf("��������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("��ѡ���ѯ�ķ�ʽ��\n");
	printf("1.��ʷ���ݣ�ȫ����   2.��ʷ����ͳ��   3.��ʷ���ݲ�ѯ   0.�˳�\n");
	printf("��������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\n");
}
void EachWeekData(Node* head)//��ʷ����ͳ��
{
	Node* move = head->next;
	while (1)
	{
		printEachWeekDataMenu();
		char Weektype = _getch();
		system("cls");//��տ���̨
		switch (Weektype)
		{
		case '0':
			printf("���˳�\n");
			return;
		case '1'://ʳ��
			while (move != NULL)
			{
				printfood_Week(head);
				break;
			}
			break;
		case '2'://����
			while (move != NULL)
			{
				printshopping_Week( head);
				break;
			}
			break;
		case '3'://����
			while (move != NULL)
			{
				printtransportation_Week(head);
				break;
			}
			break;
		case '4'://����
			while (move != NULL)
			{
				printentertainment_Week(head);
				break;
			}
			break;
		case '5'://����
			while (move != NULL)
			{
				printother_Week(head);
				break;
			}
			break;
		case '6'://ÿ����Ա
			while (move != NULL)
			{
				eachperson_Week(head);
				break;
			}
			break;
		default:
			printf("������0-6�������\n");
			break;
		}

	}
	system("pause");
	system("cls");//��տ���̨
}
void HstrySearch(Node* head)//��ʷ���ݲ�ѯ/////////////////////////////////////////////////////////////////////////////////////////
{
	Sortfood(head);//����
	Sortshopping(head);
	Sorttransportation(head);
	Sortentertainment(head);
	Sortother(head);


	int sch;
	SearchMenu();
	sch = _getch();

	system("cls");//��տ���̨
	//scanf_s("%d", &sch);
	switch (sch)
	{
	case '0':
		printf("���˳�\n");
		break;
	case '1'://��֧������
		SearchType_Week(head);
		break;
	case '2'://����Ա
		SearchPerson_Week(head);
		break;
	case '3'://�ܽ��
		SearchTotalamount_Week(head);
		break;

	default:
		printf("������0-4�������\n");
		break;
	}

}
void printEachWeekDataMenu()
{
	printf("��������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("��ѡ���ѯ�����ͣ�\n");
	printf("1.ʳ��   2.����   3.����   4.����   5.����   6.ÿ����Ա    0.�˳�\n");
	printf("��������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\n");
}
void printWeekMenu()
{
	printf("��������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("������Ҫ��ѯ�ڼ��ܣ��������֣����س���\n");
	printf("��������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\n");
}
void printfood_Week(Node* head)
{

	printWeekMenu();//ʱ��˵�
	int week;
	scanf_s("%d", &week);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time >7*(week-1)&& move->person.time<=7*week)
		{
			printf("��%d��   %s  ʳ�%.2f\n", move->person.time, move->person.name, move->person.food);
		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
}
void printshopping_Week(Node* head)
{

	printWeekMenu();//ʱ��˵�
	int week;
	scanf_s("%d", &week);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
		{
			printf("��%d��   %s  ���%.2f\n", move->person.time, move->person.name, move->person.shopping);
		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
}
void printtransportation_Week(Node* head)
{

	printWeekMenu();//ʱ��˵�
	int week;
	scanf_s("%d", &week);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
		{
			printf("��%d��   %s  ���У�%.2f\n", move->person.time, move->person.name, move->person.transportation);
		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
}
void printentertainment_Week(Node* head)
{

	printWeekMenu();//ʱ��˵�
	int week;
	scanf_s("%d", &week);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
		{
			printf("��%d��   %s  ���֣�%.2f\n", move->person.time, move->person.name, move->person.entertainment);
		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
}
void printother_Week(Node* head)
{

	printWeekMenu();//ʱ��˵�
	int week;
	scanf_s("%d", &week);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
		{
			printf("��%d��   %s  ���֣�%.2f\n", move->person.time, move->person.name, move->person.others);
		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
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
			printf("���˳�\n");
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
			printf("������0-4�������\n");
			break;
		}
	}
	system("pause");
	system("cls");//��տ���̨
}
void printperson1_Week(Node* head)
{
	printWeekMenu();//ʱ��˵�
	int week;
	scanf_s("%d", &week);
	char name[30] = "����";
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (strcmp(move->person.name, name, sizeof(name)) == 0)
		{
			if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
			{
				printf("��%d��\n������%s\nʳ�%.2f\n���%.2f\n���У�%.2f\n���֣�%.2f\n������%.2f\n��֧����%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);

			}
		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
}
void printperson2_Week(Node* head)
{
	printWeekMenu();//ʱ��˵�
	int week;
	scanf_s("%d", &week);
	char name[30] = "����";
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (strcmp(move->person.name, name, sizeof(name)) == 0)
		{
			if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
			{
				printf("��%d��\n������%s\nʳ�%.2f\n���%.2f\n���У�%.2f\n���֣�%.2f\n������%.2f\n��֧����%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);

			}
		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
}
void printperson3_Week(Node* head)
{
	printWeekMenu();//ʱ��˵�
	int week;
	scanf_s("%d", &week);
	char name[30] = "����";
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (strcmp(move->person.name, name, sizeof(name)) == 0)
		{
			if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
			{
				printf("��%d��\n������%s\nʳ�%.2f\n���%.2f\n���У�%.2f\n���֣�%.2f\n������%.2f\n��֧����%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);

			}
		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
}
void printperson4_Week(Node* head)
{
	printWeekMenu();//ʱ��˵�
	int week;
	scanf_s("%d", &week);
	char name[30] = "����";
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move->next != NULL)
	{
		if (strcmp(move->person.name, name, sizeof(name)) == 0)
		{
			if (move->person.time > 7 * (week - 1) && move->person.time <= 7 * week)
			{
				printf("��%d��\n������%s\nʳ�%.2f\n���%.2f\n���У�%.2f\n���֣�%.2f\n������%.2f\n��֧����%.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);

			}
		}
		move = move->next;

	}
	system("pause");
	system("cls");//��տ���̨
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
			printf("���˳�\n");
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
			printf("������0-2�������\n");
			break;
		}
	}
	system("pause");
	system("cls");//��տ���̨
}
void SortTypeTotal_Week(Node* head)
{
	printWeekMenu();//ʱ��˵�
	int week;
	scanf_s("%d", &week);
	system("cls");//��տ���̨
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
	printf("��%d��\n", week);
	printf("ʳ����֧����%.2f\n������֧����%.2f\n������֧����%.2f\n������֧����%.2f\n������֧����%.2f\n", FoodTotal, ShoppingTotal, Transportation, EntertainmentTotal, OthersTotal);
	system("pause");
	system("cls");//��տ���̨
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
	printWeekMenu();//ʱ��˵�
	int week;
	scanf_s("%d", &week);
	system("cls");//��տ���̨
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
	printf("��%d��   %s  ��֧����%.2f\n", move->person.time, move->person.name, Totalamount_Week);
	system("pause");
	system("cls");//��տ���̨
}
void SearchType_Week(Node* head)
{
	Node* move = head->next;
	while (1)
	{
		printTypeMenu();
		char schtype = _getch();
		system("cls");//��տ���̨
		switch (schtype)
		{
		case '0':
			printf("���˳�\n");
			return;
		case '1'://ʳ��
			while (move != NULL)
			{
				Sortfood(head);
				printfood_Week(head);
				break;
			}
			break;
		case '2'://����
			while (move != NULL)
			{
				Sortshopping(head);
				printshopping_Week(head);
				break;
			}
			break;
		case '3'://����
			while (move != NULL)
			{

				Sorttransportation(head);
				printtransportation_Week(head);
				break;
			}
			break;
		case '4'://����
			while (move != NULL)
			{

				Sortentertainment(head);
				printentertainment_Week(head);
				break;
			}
			break;
		case '5'://����
			while (move != NULL)
			{
				Sortother(head);
				printother_Week(head);
				break;
			}
			break;
		default:
			printf("������0-5�������\n");
			break;
		}

	}
	system("pause");
	system("cls");//��տ���̨
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
			printf("���˳�\n");
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
			printf("������0-4�������\n");
			break;
		}
	}
	system("pause");
	system("cls");//��տ���̨
}
