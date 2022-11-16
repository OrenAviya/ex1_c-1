#include <stdio.h>
int x ,y;
int flag = 0;
char clear= 'c';
while(flag != 2 ){ // צריך לנקות את הקלט עם חוצץ הקלט !!!!!!!!!
    flag = printf("please enter two integer numbers. \n");
    scanf("%d %d" , &x &y);
    if(flag != 2){
        printf("ERROR. please try again");
        //cleaning the Input Buffer.
        scanf("%c" &clear);
    }
}





