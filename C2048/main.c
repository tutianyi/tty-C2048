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
        case 75: moved = MoveLeft();break;  // ���µ��Ƿ������
        case 77: moved = MoveRight();break; // ���µ��Ƿ������
        case 72: moved = MoveUp();break;    // ���µ��Ƿ������
        case 80: moved = MoveDown();break;  // ���µ��Ƿ������
        }
        if(moved)
        {
            InsertANumber();
            printf("�ƶ�������%d\n", ++step);
            Output();
        }
    }
    return 0;
}
