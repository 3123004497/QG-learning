#include "Familyamountsystem.h"
void inputinformation(Node* head)//录入功能
{
	printf("请输入家庭成员信息：\n");
	Node* head1 = malloc(sizeof(Node));
	head1->next = NULL;
	printf("时间：");
	scanf_s("%d", &head1->person.time);
	printf("姓名：");
	scanf_s("%s", &head1->person.name[0], 30);
	printf("食物：");
	scanf_s("%f", &head1->person.food);
	printf("购物：");
	scanf_s("%f", &head1->person.shopping);
	printf("出行：");
	scanf_s("%f", &head1->person.transportation);
	printf("娱乐：");
	scanf_s("%f", &head1->person.entertainment);
	printf("其它：");
	scanf_s("%f", &head1->person.others);
	head1->person.total_amount = head1->person.food + head1->person.shopping + head1->person.transportation + head1->person.entertainment + head1->person.others;
	Node* move = head;
	while (move->next != NULL)
	{
		move = move->next;
		//move->next = head1;
	}
	move->next = head1;
	Save_date(head);//保存数据
	system("pause");
	system("cls");//清空控制台
}