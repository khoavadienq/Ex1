#pragma once 
#include <iostream>

struct Date{
    int month;
    int day;
    int year;
};

int countLine();
void readFile(int n, Date date[]);
void arrangeDate(int n, Date date[]);
void printFile(int n, Date date[]);