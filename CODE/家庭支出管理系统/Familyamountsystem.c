#include "Familyamountsystem.h"
int main()
{
	Node* head = malloc(sizeof(Node));
	head->next = NULL;
	//loadPerson(head);//��ȡ����
	while (1)
	{
		loadPerson(head);//��ȡ����
		printmainMenu();
		char o = _getch();
		switch (o)
		{
		case '0':
			printf("���˳�\n");
			return;
		case '1'://¼��
			inputinformation(head);
			break;
		case '2'://ͳ��
		    Eachdayamount(head);
			break;
		case '3'://��ѯ
			Search(head);
			break;
		case '4'://��ʷ����
			HistoricalData(head);
			break;
		default:
			printf("������0-4�������\n");
			break;
		}
	}
	return 0;
}
//��ӡ���˵�
void printmainMenu()
{
	printf("������������������֧ͥ��ϵͳ����������������������������������������������������������\n");
	printf("1.¼��  2.ͳ��  3.��ѯ  4.��ʷ����   0.�˳�\n");
	printf("��������������������������������������������������������������������������������������������������\n");
	printf("�����빦��ѡ�0-4��:\n");

}