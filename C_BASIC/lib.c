#include "lib.h"
void cadge (someone_t*person,FILE*file){
    (void)person;
	fprintf(file,"lam on lam phuoc \n");
}
void stole (someone_t*person,FILE*file){
    (void)person;
	fprintf(file,"!!!\n");
}
void work(someone_t*person,FILE*file){
	fprintf(file,"%d\n",person->income.number);
}
