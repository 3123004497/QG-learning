#include "Familyamountsystem.h"
void loadPerson(Node* head)//读取数据
{
	FILE* file = fopen("data.text", "r");
	if (file == NULL)
	{
		printf("无历史数据，跳过读取\n");
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
	free(head1);//最后多定义了一个head1,要将它释放
	fclose(file);
	printf("读取成功\n");
}