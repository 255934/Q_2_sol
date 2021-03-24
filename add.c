#include <stdlib.h>
#include <stdio.h>
#include "temp.h"

int display(info_t *temp)
{
    if(temp==NULL)
    {
        return 0;
    }

 
    for(int i=0;i<5;i++)
    {
        printf("%s\n",(temp+i)->name);
        printf("%s\n",(temp+i)->mail_id);
        printf("%s\n",(temp+i)->git_link);
    }
    return 1;
}