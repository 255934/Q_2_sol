#include <stdio.h>
#include <stdlib.h>
#include "temp.h"
int main()
{
    read_arr("database.csv");
    
    display(arr);
    sort(arr);
}