#include <stdio.h>
#include <stdlib.h>

void mainmenu(int price);
void maincourse(int price,char *food[]);
void drink(int price);
void order(int price,char *food[]);
char *food[]={"Hamburger","Hotdog","Salad","Fries","Nugget"};
int point;
int count=0;


int main(){

    while(1){
        int choice;
        int price=0;
        printf("Welcome To The Krusty Krab\n\n");
        printf("*******************\n");
        printf("*****1.Enter*******\n");
        printf("*****2.Exit ******* \n");
        printf("*******************\n");
        printf("Please Choose: => ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                system("CLS");
                mainmenu(price);
                break;
            case 2:
                printf("\nBye\n");
                printf("Coding by \n");
                printf("404416520 ªô¤h»Ê\n");
                printf("406123456 ³¹©w¶£\n");
                return 0;
        }
    }

}

void mainmenu(int price){

    int choicemain;
    printf("Welcome To The Krusty Krab\n\n");
    printf("*************************\n");
    printf("*****1.Main Course*******\n");
    printf("*****2.Drink      ******* \n");
    printf("*****3.Take Order ******* \n");
    printf("*****4.Exit       ******* \n");
    printf("*************************\n");
    //printf("Already Ordered:\n");
    printf("Total:$%d\n",price);
    printf("Please Choose: => ");
    scanf("%d",&choicemain);
    switch(choicemain){
        case 1:
            maincourse(price,food);
            break;
        case 2:
            drink(price);
            break;
        case 3:
            order(price,food);
            break;
        case 4:
            system("CLS");
            break;
    }

}

void maincourse(int price,char *food[]){
    int choicecouse;
	system("CLS");
	printf("Main Course:\n");
	printf("1. Hamburger  $100\n");
	printf("2. Hotdog     $50\n");
	printf("3. Salad      $40\n");
	printf("4. Fries      $45\n");
	printf("5. Nugget     $40\n");
	printf("6. Back\n");
	printf("Select:");
	scanf("%d",&choicecouse);
	switch(choicecouse){
        case 1:
            price+=100;
            point=1;
            count++;
            maincourse(price,food);
            break;
        case 2:
            price+=50;
            point=2;
            count++;
            maincourse(price,food);
            break;
        case 3:
            price+=40;
            point=3;
            count++;
            maincourse(price,food);
            break;
        case 4:
            price+=45;
            point=4;
            count++;
            maincourse(price,food);
            break;
        case 5:
            price+=40;
            point=5;
            count++;
            maincourse(price,food);
            break;
        case 6:
            system("CLS");
            mainmenu(price);
            break;
	}
}

void drink(int price){
	int choiceprice;
	system("CLS");
	printf("Drink:\n");
	printf("1. Cola         $30\n");
	printf("2. Red Tea      $20\n");
	printf("3. Milk Tea     $45\n");
	printf("4. Lemon Juice  $25\n");
	printf("5. Latte        $55\n");
	printf("6. Back\n");
	printf("Select:");
	scanf("%d",&choiceprice);
	switch(choiceprice){
        case 1:
            price+=30;
            drink(price);
            break;
        case 2:
            price+=20;
            drink(price);
            break;
        case 3:
            price+=45;
            drink(price);
            break;
        case 4:
            price+=25;
            drink(price);
            break;
        case 5:
            price+=55;
            drink(price);
            break;
        case 6:
            system("CLS");
            mainmenu(price);
            break;
	}
}

void order(int price,char *food[]){
    int n;
    system("CLS");

    for(int i=0;i<count;i++){
        printf("your order:\n");
        if(point==1)
        printf("%s\n",food[0]);
        else if(point==2)
        printf("%s\n",food[1]);
        else if(point==3)
        printf("%s\n",food[2]);
        else if(point==4)
        printf("%s\n",food[3]);
        else
        printf("%s\n",food[4]);
    }


    printf("Enter 2 to exit:\n");
    printf("=>");
    scanf("%d",&n);
    if(n==2){
        system("CLS");
        mainmenu(price);
    }


}





