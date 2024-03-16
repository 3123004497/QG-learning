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

typedef struct _Node//���
{
	Person person;
	struct _Node* next;
}Node;
//����
void inputinformation(Node* head);//¼��
void printmainMenu();//��ӡ���˵�
void Save_date(Node* head);//��������
void loadPerson(Node* head);//��ȡ����
void printmessage(Node* head);//��ӡ
//ͳ��ÿ��
void Eachdayamount(Node* head);
//��ѯ
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
//��ʷ���ݹ���
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




//����
void Sortfood(Node* head);//��֧������
void printfood(Node* head);
void Sortshopping(Node* head);
void printshopping(Node* head);
void Sorttransportation(Node* head);
void printtransportation(Node* head);
void Sortentertainment(Node* head);
void printentertainment(Node* head);
void Sortother(Node* head);
void printother(Node* head);
void printperson1(Node* head);//����Ա
void printperson2(Node* head);
void printperson3(Node* head);
void printperson4(Node* head);
void SortTotalamount(Node* head);//���ܽ��
void printTotalamount(Node* head);
void SortTypeTotal(Node* head);