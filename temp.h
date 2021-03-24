#ifndef __t__
#define __t__
typedef struct info_t
{
   char name[100];
   char mail_id[100];
   char git_link[100];
} info_t;
extern info_t *arr;
int read_arr(char* file_name);


int display(info_t *temp);
int sort(info_t *temp);
#endif