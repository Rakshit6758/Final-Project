#include<iostream>
#include<windows.h>
#include<conio.h>
#include<fstream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
using namespace std;
//global variable declaration:
int k=7,r=0,flag=0;
COORD coord = {0, 0};

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
struct date
{
    int mm,dd,yy;
};

ofstream fout;
ifstream fin;

class item
{
    int itemno;
    char name[25];
    date d;
public:
    void add()
    {
        cout<<"\n\n\tItem No: ";
        cin>>itemno;
        cout<<"\n\n\tName of the item: ";
        cin>>name;
//gets(name);
        cout<<"\n\n\tManufacturing Date(dd-mm-yy): ";
        cin>>d.mm>>d.dd>>d.yy;
    }
    void show()
    {
        cout<<"\n\tItem No: ";
        cout<<itemno;
        cout<<"\n\n\tName of the item: ";
        cout<<name;
        cout<<"\n\n\tDate : ";
        cout<<d.mm<<"-"<<d.dd<<"-"<<d.yy;
    }
    void report()
    {
        gotoxy(3,k);
        cout<<itemno;
        gotoxy(13,k);
        puts(name);
    }
    int retno()
    {
        return(itemno);

    }

};



