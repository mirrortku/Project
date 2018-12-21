#include "menu.h"

void maincourse(p){
	int cc;
	system("CLS");
	printf("Main Course:\n");
	printf("1. Hamburger  $100\n");
	printf("2. Hotdog     $50\n");
	printf("3. Salad      $40\n");
	printf("4. Fries      $45\n");
	printf("5. Nugget     $40\n");
	printf("6. Back\n");
	printf("Select:");
	scanf("%d",&cc);
	if(cc==6){
        mainmenu();
	}
	if(cc==1){
        p=p+100;
        mainmenu();
	}
	if(cc==2){
        p=p+50;
        mainmenu();
	}
	if(cc==3){
        p=p+40;
        mainmenu();
	}
    if(cc==4){
        p=p+45;
        mainmenu();
	}
    if(cc==5){
        p=p+50;
        mainmenu();
	}
	else{
        maincourse();
	}
}
