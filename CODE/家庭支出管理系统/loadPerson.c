#include "Familyamountsystem.h"
void loadPerson(Node* head)//��ȡ����
{
	FILE* file = fopen("data.text", "r");
	if (file == NULL)
	{
		printf("����ʷ���ݣ�������ȡ\n");
		return;
	}

	Node* head1 = malloc(sizeof(Node));
	head1->next = NULL;
	Node* move = head;

	while (fread(&head1->person, sizeof(Person), 1, file) == 1)
		//while(fscanf(file,"%i", &head1->person)==1)
	{
		move->next = head1;
		move = head1;
		head1 = malloc(sizeof(Node));
		head1->next = NULL;

	}
	free(head1);//���ඨ����һ��head1,Ҫ�����ͷ�
	fclose(file);
	printf("��ȡ�ɹ�\n");
}