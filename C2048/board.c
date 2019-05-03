#include "board.h"
#include "link.h"
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
        printf("©¦");
        if(cells[row][j]==0)
            printf("    ");
        else
            printf("%4d", cells[row][j]);
    }
    printf("©¦\n");
}

void Output()
{
    printf("©°©¤©¤©¤©¤©Ð©¤©¤©¤©¤©Ð©¤©¤©¤©¤©Ð©¤©¤©¤©¤©´\n");
    OutputLine(0);
    printf("©À©¤©¤©¤©¤©à©¤©¤©¤©¤©à©¤©¤©¤©¤©à©¤©¤©¤©¤©È\n");
    OutputLine(1);
    printf("©À©¤©¤©¤©¤©à©¤©¤©¤©¤©à©¤©¤©¤©¤©à©¤©¤©¤©¤©È\n");
    OutputLine(2);
    printf("©À©¤©¤©¤©¤©à©¤©¤©¤©¤©à©¤©¤©¤©¤©à©¤©¤©¤©¤©È\n");
    OutputLine(3);
    printf("©¸©¤©¤©¤©¤©Ø©¤©¤©¤©¤©Ø©¤©¤©¤©¤©Ø©¤©¤©¤©¤©¼\n");
}

void InsertANumber()
{
    int i,j;
    struct Head *h = NewList();
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(cells[i][j]==0)
                InsertNode(h, &cells[i][j]);
        }
    }
    AddANumber(h);
    Release(h);
}

int MoveLeft()
{
    int i,j,moved=0;
    struct Head *h;
    for(i=0;i<ROW;i++)
    {
        h = NewList();
        for(j=0;j<COL;j++)
            InsertNode(h, &cells[i][j]);
        moved += Move(h);
        Release(h);
    }
    return moved;
}
int MoveRight()
{
    int i,j,moved=0;
    struct Head *h;
    for(i=0;i<ROW;i++)
    {
        h = NewList();
        for(j=COL-1;j>=0;j--)
            InsertNode(h, &cells[i][j]);
        moved += Move(h);
        Release(h);
    }
    return moved;
}
int MoveUp()
{
    int i,j,moved=0;
    struct Head *h;
    for(j=0;j<COL;j++)
    {
        h = NewList();
        for(i=0;i<ROW;i++)
            InsertNode(h, &cells[i][j]);
        moved += Move(h);
        Release(h);
    }
    return moved;
}
int MoveDown()
{
    int i,j,moved=0;
    struct Head *h;
    for(j=0;j<COL;j++)
    {
        h = NewList();
        for(i=ROW-1;i>=0;i--)
            InsertNode(h, &cells[i][j]);
        moved += Move(h);
        Release(h);
    }
    return moved;
}
