#include "menu.h"

void drink(p){
	int cc;
	system("CLS");
	printf("Drink:\n");
	printf("1. Cola         $30\n");
	printf("2. Red Tea      $20\n");
	printf("3. Milk Tea     $45\n");
	printf("4. Lemon Juice  $25\n");
	printf("5. Latte        $55\n");
	printf("6. Back\n");
	printf("Select:");
	scanf("%d",&cc);
	if(cc==6){
        mainmenu();
	}
	if(cc==1){
        p=p+30;
        mainmenu();
	}
	if(cc==2){
        p=p+20;
        mainmenu();
	}
	if(cc==3){
        p=p+45;
        mainmenu();
	}
    if(cc==4){
        p=p+25;
        mainmenu();
	}
    if(cc==5){
        p=p+55;
        mainmenu();
	}
	else{
        maincourse();
	}
}
