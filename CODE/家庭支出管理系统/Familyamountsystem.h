#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct _Person
{
	int time;
	char name[30];
	float food;
	float shopping;
	float transportation;
	float entertainment;
	float others;
	float total_amount;
}Person;

typedef struct _Node//结点
{
	Person person;
	struct _Node* next;
}Node;
//声明
void inputinformation(Node* head);//录入
void printmainMenu();//打印主菜单
void Save_date(Node* head);//保存数据
void loadPerson(Node* head);//读取数据
void printmessage(Node* head);//打印
//统计每天
void Eachdayamount(Node* head);
//查询
void Search(Node* head);
void SearchMenu();
void dateMenu();
void chooseDay(Node* head);
void printTypeMenu();
void SearchType(Node* head);
void printPersonMenu();
void SearchPerson(Node* head);
void SearchTotalamount(Node* head);
void printTotalamountMenu();
//历史数据功能
void HistoricalData(Node* head);
void printHistoricalDataMenu();
void EachWeekData(Node* head);
void printEachWeekDataMenu();
void printWeekMenu();
void printfood_Week(Node* head);
void printshopping_Week(Node* head);
void printtransportation_Week(Node* head);
void printentertainment_Week(Node* head);
void printother_Week(Node* head);
void eachperson_Week(Node* head);
void printperson1_Week(Node*head);
void printperson2_Week(Node* head);
void printperson3_Week(Node* head);
void printperson4_Week(Node* head);
void SearchTotalamount_Week(Node* head);
void SortTypeTotal_Week(Node*head);
void SortTotalamount_Week(Node*head);
void printTotalamount_Week(Node*head);
void SearchType_Week(Node*head);
void SearchPerson_Week(Node* head);
void SearchTotalamount_Week(Node* head);
void HstrySearch(Node* head);




//排序
void Sortfood(Node* head);//按支出类型
void printfood(Node* head);
void Sortshopping(Node* head);
void printshopping(Node* head);
void Sorttransportation(Node* head);
void printtransportation(Node* head);
void Sortentertainment(Node* head);
void printentertainment(Node* head);
void Sortother(Node* head);
void printother(Node* head);
void printperson1(Node* head);//按成员
void printperson2(Node* head);
void printperson3(Node* head);
void printperson4(Node* head);
void SortTotalamount(Node* head);//按总金额
void printTotalamount(Node* head);
void SortTypeTotal(Node* head);