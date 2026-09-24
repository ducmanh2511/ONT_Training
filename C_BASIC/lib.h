#ifndef LIB_H
#define LIB_H
#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#define MAX_PEOPLE 100
#define INCOME_WORKER 500000
typedef union{
	uint32_t number;
	char* text;
}income_t;
typedef struct someone_t someone_t;
typedef void (*action_t) (someone_t* people,FILE*file);

struct someone_t{
	char *type;
        income_t income; 
        action_t action;
};
void cadge (someone_t*person,FILE*file);
void stole (someone_t*person,FILE*file);
void work(someone_t*person,FILE*file);

#endif
