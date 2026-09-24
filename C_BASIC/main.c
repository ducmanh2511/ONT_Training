#include<stdio.h>
#include "lib.h"

int main(){
  int n;
  printf("Nhap so nguoi: ");
  scanf("%d",&n);
  if(n<1||n>MAX_PEOPLE){
	fprintf(stderr,"So nguoi phai tu 1 den %d\n",MAX_PEOPLE);
	  return 1;
  }
  someone_t people[n];
  for(int i=0;i<n;i++){
      int type = rand()%3;
      switch (type){
	  case 0 :
	      people[i].type = "anxin";
	      people[i].income.text = "tuytam";
	      people[i].action = cadge;
	      break;
	  case 1:
	      people[i].type = "antrom";
	      people[i].income.text = "henxui";
	      people[i].action = stole;
	      break;
	  case 2:
	      people[i].type = "congnhan";
	      people[i].income.number = INCOME_WORKER;
	      people[i].action = work;
	     break; 
      }


  }
      FILE*file = fopen("output.txt","w");
	  if(file==NULL){
		 perror("fopen");
		 return 1;
	  }
      for(int i=0;i<n;i++){
	      people[i].action(&people[i],file);
      }
      fclose(file);
}
