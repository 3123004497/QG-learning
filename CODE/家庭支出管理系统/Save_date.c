#include "Familyamountsystem.h"
//��������
void Save_date(Node* head)
{
	FILE* file = fopen("data.text", "w+");//����ĵ���ʾΪ���룬ֻ��Ϊ���������ʹ��
	FILE* file1 = fopen("visualdata.text", "w+");//��ֱ�Ӵ�����ĵ��鿴����
	if (file == NULL )
	{
		printf("���ļ�ʧ�ܣ�\n");
	}
	Node* move = head->next;
	while (move != NULL)
	{
		fwrite(&move->person, sizeof(Person), 1, file);
		fprintf(file1, "%d   %s   %.2f   %.2f   %.2f   %.2f   %.2f   %.2f\n", move->person.time, move->person.name, move->person.food, move->person.shopping, move->person.transportation, move->person.entertainment, move->person.others, move->person.total_amount);
		move = move->next;
	}
	fclose(file);
	fclose(file1);
}