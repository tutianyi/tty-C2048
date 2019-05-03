#include "board.h"
#include <time.h>
#include <stdlib.h>
#define ROW 4
#define COL 4
static int cells[ROW][COL];

void StartGame()
{
    int i,j;
    for(i=0; i<ROW; i++)
        for(j=0; j<COL; j++)
            cells[i][j] = 0;
}
static void OutputLine(int row)
{
    int j;
    for(j=0; j<COL; j++)
    {
        printf("��");
        if(cells[row][j]==0)
            printf("    ");
        else
            printf("%4d", cells[row][j]);
    }
    printf("��\n");
}

void Output()
{
    printf("�����������Щ��������Щ��������Щ���������\n");
    OutputLine(0);
    printf("�����������੤�������੤�������੤��������\n");
    OutputLine(1);
    printf("�����������੤�������੤�������੤��������\n");
    OutputLine(2);
    printf("�����������੤�������੤�������੤��������\n");
    OutputLine(3);
    printf("�����������ة��������ة��������ة���������\n");
}

void InsertANumber()
{
    srand((unsigned)time(NULL));
    cells[rand()%ROW][rand()%COL] = 2;
}

int MoveLeft()
{
    return 1;
}
int MoveRight()
{
    return 1;
}
int MoveUp()
{
    return 1;
}
int MoveDown()
{
    return 1;
}
