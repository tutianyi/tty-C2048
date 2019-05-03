#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void StartGame(){}
void InsertANumber(){}
void Output(){}
int MoveLeft(){return 1;}
int MoveRight(){return 1;}
int MoveUp(){return 1;}
int MoveDown(){return 1;}

int main()
{
    int key1, key2, step=0, moved;
    StartGame();
    InsertANumber();
    InsertANumber();
    Output();
    while(1)
    {
        key1=_getch();
        if(key1)
        {
            key2=_getch();
        }
        switch(key2)
        {
        case 75: moved = MoveLeft();break;  // 按下的是方向键左
        case 77: moved = MoveRight();break; // 按下的是方向键右
        case 72: moved = MoveUp();break;    // 按下的是方向键上
        case 80: moved = MoveDown();break;  // 按下的是方向键下
        }
        if(moved)
        {
            InsertANumber();
            printf("移动步数：%d\n", ++step);
            Output();
        }
    }
    return 0;
}
