#include "Familyamountsystem.h"
//保存数据
void Save_date(Node* head)
{
	FILE* file = fopen("data.text", "w+");//这个文档显示为乱码，只是为了输出需求使用
	FILE* file1 = fopen("visualdata.text", "w+");//可直接打开这个文档查看数据
	if (file == NULL )
	{
		printf("打开文件失败！\n");
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