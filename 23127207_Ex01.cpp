#include "header.h"

int main(){
    int num_line = countLine();
    Date *date;

    date = new Date[num_line - 1];

    delete [] date;
    return 0;
}
