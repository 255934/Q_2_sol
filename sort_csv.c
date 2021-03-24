#include <stdio.h>
#include <stdlib.h>
#include "temp.h"
int comparator(const void* p, const void* q)
{
    return strcmp(((info_t*)p)->name,
                  ((info_t*)q)->name);
}
int sort(info_t *temp)
{
    if(temp==NULL)
    {
        return 0;
    }
    qsort(temp, 5, sizeof(info_t), comparator);
    for (int i = 0; i < 5; i++) {
        printf("%s",(temp+i)->name);
        printf("%s",(temp+i)->mail_id);
        printf("%s",(temp+i)->git_link);

    }
    return 1;

}