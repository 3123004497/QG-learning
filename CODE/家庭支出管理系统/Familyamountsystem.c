#include "Familyamountsystem.h"
int main()
{
	Node* head = malloc(sizeof(Node));
	head->next = NULL;
	//loadPerson(head);//读取数据
	while (1)
	{
		loadPerson(head);//读取数据
		printmainMenu();
		char o = _getch();
		switch (o)
		{
		case '0':
			printf("已退出\n");
			return;
		case '1'://录入
			inputinformation(head);
			break;
		case '2'://统计
		    Eachdayamount(head);
			break;
		case '3'://查询
			Search(head);
			break;
		case '4'://历史数据
			HistoricalData(head);
			break;
		default:
			printf("请输入0-4间的数字\n");
			break;
		}
	}
	return 0;
}
//打印主菜单
void printmainMenu()
{
	printf("————————家庭支出系统—————————————————————————————\n");
	printf("1.录入  2.统计  3.查询  4.历史数据   0.退出\n");
	printf("—————————————————————————————————————————————————\n");
	printf("请输入功能选项（0-4）:\n");

}