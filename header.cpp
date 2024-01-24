#include <fstream>
#include <algorithm>
#include "header.h"

using namespace std;


int countLine(){
    ifstream  input;
    input.open("input.txt");

    if (!input.is_open())
        return -1;
    
    int count_line = 0;
    char line;

    while (input.get(line))
        if (line == '\n') 
            count_line ++;
    
    if (input.eof())
        count_line ++;
    
    input.close();
    return count_line;
}

void readFile(int n, Date date[]){
    ifstream input;
    input.open("input.txt");

    if (!input.is_open()) {
        cout << "Cannot open input.txt";
        return;
    }

    for (int i = 0; i < n - 1; i++){
        input >> date[i].year;
        input.ignore(100, ' ');
        input >> date[i].month;
        input.ignore(100,' ');
        input >> date[i].day;
        input.ignore(100, '\n');
    }

    input.close();
}

void arrangeDate(int n, Date date[]){
    for (int i = 0; i < n - 1; i++)
        for (int j = i; j < n - 1; j++)
            if (date[i].year > date[j].year) swap(date[i], date[j]);
                else if ((date[i].year == date[j].year) && (date[i].month > date[j].month)) 
                    swap(date[i], date[j]);
                else if ((date[i].year == date[j].year) && (date[i].month == date[j].month) && (date[i].day > date[j].day)) 
                    swap(date[i], date[j]);
}

void printFile(int n, Date date[]){
    ofstream output;
    output.open("ouput.txt");

    for(int i = 0; i < n - 1; i++)
        output << "Date " << i << " " << date[i].year << " " << date[i].month << " " << date[i].day << endl;
    cout << "Done!";

    output.close();
}