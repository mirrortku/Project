#include "menu.h"

void showmenu(p){

    int cc;
    system("CLS");
    printf("%d",p);
    printf("Welcome To The Krusty Krab\n\n");
    printf("*************************\n");
    printf("*****1.Main Course*******\n");
    printf("*****2.Drink      ******* \n");
    printf("*****3.Take Order ******* \n");
    printf("*****4.Exit       ******* \n");
    printf("*************************\n");
    printf("Already Ordered:\n");
    printf("Total:%d\n",p);
    printf("Please Choose: => ");
    scanf("%d",&cc);
    if (cc==4){
        exit(1);
    }
    if(cc==1){
        maincourse();
    }
    if(cc==2){
        drink();
    }
    if(cc==3){
        printf("Please Wait");
    }
	else{
        mainmenu();
	}
}
