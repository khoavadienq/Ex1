#include "header.h"

int main(){
    int num_line = countLine();
    Date *date;

    date = new Date[num_line - 1];

    readFile(num_line, date);
    arrangeDate(num_line, date);
    printFile(num_line, date);

    delete [] date;
    return 0;
}
