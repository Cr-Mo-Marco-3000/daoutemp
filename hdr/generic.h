#pragma once
/*
* generic.h
* ---------
* �� ������Ͽ���, ���� �ҽ����Ͽ��� ���� ����ü, �Լ� ������ ����Ǿ� �ֽ��ϴ�.
*/

/*
����ü �����Դϴ�.
*/
typedef struct User {
	int userNo;
	char name[31];
	int balance;
} USER;

typedef struct Stock_user {
	int userNo;
	int stock_id;
	int stock_cnt;
} STOCK_USER;

typedef struct Trade {
	char date[11];
	int type;
	char code[11];
	int amount;
	int price;
}Trade;

typedef struct  // �ܰ��ֽĵ����� ȸ����ȣ/�����ڵ�/�����ֽļ�
{
	int member_num;
	char code[30];
	int quantity;
} Stock;

typedef struct StockInfo {
	char stock_code[10];
	char stock_name[20];
	char date[30];
	int close;
	int compare;
	int open;
	int high;
	int low;
	int volume;
} StockInfo;



/*
���� �Լ��� ���� �Լ� �����Դϴ�.
*/
void checkStringLength(char *msg, char *string, int size);
void num_check(char *msg, int max, int min, int *f_addr);

#define STOCK_ALL_CNT 30



/*
auth.c ���Ͽ� ���� �Լ� �����Դϴ�.
*/

void auth(USER *userP);
void login(USER *userP);
void signup(USER *userP);
void logout(USER *userP);

