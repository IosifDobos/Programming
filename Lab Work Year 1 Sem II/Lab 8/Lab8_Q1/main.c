/**
 * Lab Work Week 8
 * Program written in C language using structure
 * Question 1
 *
 * Created by Iosif Dobos, C16735789 @copyright all rights are reserved
 * Date: 14/03/2017
 */

#include <stdio.h>

//declaring symbolic name
#define SIZE 5
#define NUM 21
#define BOOK 31
#define CUST 46
#define TIME 12
#define TEAM 30

//declare function prototype


//declare structure tag
struct cards
{
    char diamonds[SIZE];
    int card;
};

struct record
{
    int stock_number[NUM];
    char stock_description[NUM];
    int stock_quantity[NUM];
};

struct book_record
{
    char ISBN[BOOK];
    char book_title[BOOK];
    char author[BOOK];
    float price[BOOK];
};

struct cust_record
{
    unsigned int cust_num[CUST];
    char name[CUST];
    char address[CUST];
    double balance[CUST];
};

struct transaction_record
{
    char type_trans[TIME];
    int date_of_trans[TIME];
    float ammnt_trans[TIME];
};

struct day_time
{
    int hours;
    int minutes;
    int seconds;
};

struct long_lat
{
    int degrees;
    int minutes;
    char direction;
};

struct league_team
{
    int teams[TEAM];
    char team_name[TEAM];
    int no_wins;
    int draws;
    int losses;
};

struct stock_record
{
    int no;
    char description[NUM];
    float price;
    int qty;
};

//main function
int main()
{
    struct stock_record stock_item;

    printf("Please enter the number of items: ");
    scanf("%d ", &stock_item.no);

    printf("\nEnter stock description: ");
    scanf("%20s", stock_item.description);

    printf("\nEnter the value for the stock: ");
    scanf("%.2f", &stock_item.price);

    printf("\nEnter the quantity: ");
    scanf("%d", &stock_item.qty);


    return 0;

}//end main function