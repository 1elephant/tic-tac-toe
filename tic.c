#include <stdio.h>
#include<string.h>
void input(int *row,int*col){
    printf("enter row:");
    scanf("%d",&*row);
    printf("enter column:");
    scanf("%d",&*col);
}
void display(char ar[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %c",ar[i][j]);
        }
        printf("\n");
    }
}
int main(){
    printf("TIC TAC TOE\n");
    int y=0;
    char ar[3][3]={"___","___","___"};
    display(ar);
    int row=0,col=0;
    int i=0;
    while(i<7){
        if(i%2==0){
            if(strcmp(ar[0],"ooo")==0 ||strcmp(ar[1],"ooo")==0 ||strcmp(ar[2],"ooo")==0||(ar[0][0]=='o'&& ar[1][1]=='o'&& ar[2][2]=='o')||(ar[0][0]=='o'&& ar[1][0]=='o'&& ar[2][0]=='o')||(ar[0][1]=='o'&& ar[1][1]=='o'&& ar[2][1]=='o')||(ar[2][2]=='o'&& ar[1][2]=='o'&& ar[0][2]=='o')||(ar[2][0]=='o'&& ar[1][1]=='o'&& ar[0][2]=='o')){
                printf("PLAYER 2 WON\n");
                y=1;
                break;
            }
            else{
                printf("player 1\n");
                printf("your symbol x\n");
                printf("enter coordinates where u want to mark x\n");
                input(&row,&col);
                ar[row-1][col-1]='x';
                display(ar);
                printf("_________________________________________________________________\n");
            }
        }
        if(i%2!=0){
            if(strcmp(ar[0],"xxx")==0 ||strcmp(ar[1],"xxx")==0||strcmp(ar[2],"xxx")==0||(ar[0][0]=='x'&& ar[1][1]=='x'&& ar[2][2]=='x')||(ar[2][0]=='x'&& ar[1][0]=='x'&& ar[0][0]=='x')||(ar[2][1]=='x'&& ar[0][1]=='x'&& ar[1][1]=='x')||(ar[0][2]=='x'&& ar[1][2]=='x'&& ar[2][2]=='x')||(ar[2][0]=='x'&& ar[1][1]=='x'&& ar[0][2]=='x')){
                printf("PLAYER 1 WON");
                y=1;
                break;
            }
            else{
                printf("player 2\n");
                printf("your symbol o\n");
                printf("enter coordinates where u want to mark o\n");
                input(&row,&col);
                ar[row-1][col-1]='o';
                display(ar);
                printf("____________________________________________________________________\n");    
            }
        }
        i++;
    }
    if(y==0){
        printf("ITS A TIE\n");
    }
    printf("GAME OVER");
}