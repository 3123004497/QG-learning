#include "Familyamountsystem.h"
void inputinformation(Node* head)//¼�빦��
{
	printf("�������ͥ��Ա��Ϣ��\n");
	Node* head1 = malloc(sizeof(Node));
	head1->next = NULL;
	printf("ʱ�䣺");
	scanf_s("%d", &head1->person.time);
	printf("������");
	scanf_s("%s", &head1->person.name[0], 30);
	printf("ʳ�");
	scanf_s("%f", &head1->person.food);
	printf("���");
	scanf_s("%f", &head1->person.shopping);
	printf("���У�");
	scanf_s("%f", &head1->person.transportation);
	printf("���֣�");
	scanf_s("%f", &head1->person.entertainment);
	printf("������");
	scanf_s("%f", &head1->person.others);
	head1->person.total_amount = head1->person.food + head1->person.shopping + head1->person.transportation + head1->person.entertainment + head1->person.others;
	Node* move = head;
	while (move->next != NULL)
	{
		move = move->next;
		//move->next = head1;
	}
	move->next = head1;
	Save_date(head);//��������
	system("pause");
	system("cls");//��տ���̨
}