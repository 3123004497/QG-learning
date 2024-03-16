#include "Familyamountsystem.h"

void Search(Node*head)
{
	 Sortfood( head);//����
	 Sortshopping( head);
	 Sorttransportation(head);
	 Sortentertainment( head);
	 Sortother( head);
	int sch;
	SearchMenu();
	sch = _getch();
	system("cls");//��տ���̨
		switch (sch)
		{
		case '0':
			printf("���˳�\n");
			break;
		case '1'://��֧������
			SearchType(head);
			
			break;
		case '2'://����Ա
			SearchPerson(head);
			break;
		case '3'://�ܽ��
			SearchTotalamount(head);
			break;
		default:
			printf("������0-4�������\n");
			break;
		}
}
void SearchMenu()
{
	printf("��������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("��ѡ���ѯ�ķ�ʽ��\n");
	printf("1.��֧������   2.����Ա   3.�ܽ��   0.�˳�\n");
	printf("��������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\n");

}
void dateMenu()
{
	printf("��������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("������Ҫ��ѯ�ڼ��죨�������֣����س���\n");
	printf("��������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\n");
	
}
void chooseDay(Node* head)
{
	dateMenu();//�˵�
	int time;
	scanf_s("%d", &time);
	system("cls");//��տ���̨
	Node* move = head->next;
	while (move != NULL)
	{
		if (move->person.time == time)
		{
			printf("��%d��   %s  ʳ�%.2f\n", move->person.time, move->person.name, move->person.food);
			printf("\n");
			
		}
		move = move->next;
		
	}
	system("pause");
	system("cls");//��տ���̨
	
}
void printTypeMenu()
{
	printf("��������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("��ѡ��Ҫ���ҵ����ͣ�\n");
	printf("1.ʳ��   2.����   3.����   4.����   5.����   0.�˳�\n");
	printf("��������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\n");
}
void SearchType(Node*head)
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
					printfood(head);
					break;
				}
				break;
			case '2'://����
				while (move != NULL)
				{
					Sortshopping(head);
					printshopping(head);
					break;
				}
				break;
			case '3'://����
				while (move != NULL)
				{
					
					Sorttransportation(head);
					printtransportation( head);
					break;
				}
				break;
			case '4'://����
				while (move != NULL)
				{
					
					Sortentertainment( head);
					printentertainment( head);
					break;
				}
				break;
			case '5'://����
				while (move != NULL)
				{
					Sortother(head);
					printother( head);
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
void printPersonMenu()
{
	printf("��������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("��ѡ��Ҫ���ҵĳ�Ա��\n");
	printf("1.����   2.����   3.����   4.����   0.�˳�\n");
	printf("��������������������������������������������������������������������������������������������������������������������������������������������������������\n");
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
			printf("���˳�\n");
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
			printf("������0-4�������\n");
			break;
		}
	}
	system("pause");
	system("cls");//��տ���̨
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
			printf("���˳�\n");
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
			printf("������0-2�������\n");
			break;
		}
	}
	system("pause");
	system("cls");//��տ���̨

}
void printTotalamountMenu()
{
	printf("��������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("��ѡ��Ҫ���ҵ��ܽ�����ͣ�\n");
	printf("1.ÿ��֧��   2.��֧��   0.�˳�\n");
	printf("��������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("\n");
}


